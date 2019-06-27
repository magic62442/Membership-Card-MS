#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
#include "myqsqltablemodel.h"
#include <QSqlRecord>
#include <QToolBar>
#include <QDateTime>
#include <QMessageBox>
#include "numberformatdelegate.h"
#include <QFont>
#include <QStringList>
#include <QCompleter>
#include "activity.h"
#include "curactdialog.h"
#include "setactdialog.h"
#include "newcarddialog.h"
#include "altertabledialog.h"
#include "consumptiondialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this -> setWindowTitle("会员卡消费积分管理系统");
    //打印Qt支持的数据库驱动
    //qDebug() << QSqlDatabase::drivers();
    //添加mysql数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //连接数据库
    db.setHostName("127.0.0.1");    //数据库服务器IP(本地)
    db.setUserName("root");
    db.setPassword("lqy-8855113");
    db.setDatabaseName("membercard");     //使用哪个数据库
    //打开数据库
    if(!db.open()) {
        QMessageBox::warning(this, "error", db.lastError().text());
        return;
    }

    QSqlQuery query;
//    query.exec("create table student("
//               "id int primary key auto_increment,"
//               "name varchar(255),"
//               "age int,"
//               "score int);");
//    query.exec("insert into student(id, name, age, score)"
//               "values(1, 'mike', 18, 59)");
//    query.exec("INSERT INTO `membercard`.`record` (`name`, `amount`, `note`) "
//               "VALUES ('李祺彦', '19', '李祺彦到此一游');"
//               );
//    //批量插入
//    //odbc风格
//    //预处理语句，？相当于占位符
//    query.prepare("INSERT INTO `membercard`.`record` (`name`, `amount`, `note`) "
//                  "VALUES (?, ?, ?);");
//    //给字段设置内容 list
//    QVariantList nameList, amountList, noteList;
//    nameList << "朱俊杰" << "汪海杰" << "莫光严";
//    amountList << 11 << 22 << 33;
//    noteList << "巧乐兹" << "蓝莓果粒茶" << "巧乐兹";
//    //按顺序给字段绑定相应的值
//    query.addBindValue(nameList);
//    query.addBindValue(amountList);
//    query.addBindValue(noteList);
//    //执行预处理命令
//    query.execBatch();
//    query.exec("select * from record where name = '李祺彦'");
//    while (query.next()) {  //逐行遍历
//        //取出当前行的内容
//       qDebug() << query.value(0).toInt()
//                << query.value(1).toString()
//                << query.value("time").toString()
//                << query.value("amount").toInt()
//                << query.value("note").toString();
//    }
    //设置模型
    model = new MyQSqlTableModel(this);
    showTable();

    //菜单栏
    QMenuBar *mBar = menuBar();
    //添加菜单
    QMenu *disp = mBar -> addMenu("选择表格");
    //添加菜单项
    QAction *disp_info = disp -> addAction("个人信息表");
    connect(disp_info, &QAction::triggered,
            [=]()
            {
                tableName = "info";
                showTable();
            });
    QAction *disp_card = disp -> addAction("会员卡信息表");
    connect(disp_card, &QAction::triggered,
            [=]()
            {
                tableName = "card";
                showTable();
            });
    QAction *disp_record = disp -> addAction("消费记录表");
    connect(disp_record, &QAction::triggered,
            [=]()
            {
                tableName = "record";
                showTable();
            });
    QMenu *handleCard = mBar -> addMenu("会员卡");
    QAction *newCard = handleCard -> addAction("开卡");
    connect(newCard, &QAction::triggered,
            [=](){
                NewCardDialog *newCardDialog = new NewCardDialog(this);
                newCardDialog -> setAttribute(Qt::WA_DeleteOnClose);
                newCardDialog -> setWindowTitle("开卡");
                newCardDialog -> show();
            });

    QAction *alterCard = handleCard -> addAction("会员卡相关操作");
    connect(alterCard, &QAction::triggered,
            [=](){
                AlterTableDialog *alterTableDialog = new AlterTableDialog(this);
                alterTableDialog -> setAttribute(Qt::WA_DeleteOnClose);
                alterTableDialog -> setWindowTitle("会员卡相关操作");
                alterTableDialog -> show();
            });
    QMenu *activity = mBar -> addMenu("活动");
    //设置当前活动
    actInfo -> setActivity("双十一购物节", 7.7, 500, 100, 8.5, 600, 100, 9.0, 600, 50);
    QAction *curAct = activity -> addAction("查看当前活动");
    connect(curAct, &QAction::triggered,
            [=](){
                CurActDialog *curActDialog = new CurActDialog(this);
                curActDialog -> setAttribute(Qt::WA_DeleteOnClose);
                curActDialog -> setWindowTitle("当前活动");
                curActDialog -> dispActivity();
                curActDialog -> show();
            });
    QAction *setAct = activity -> addAction("修改活动内容");
    connect(setAct, &QAction::triggered,
            [=] {
                SetActDialog *setActDialog = new SetActDialog(this);
                setActDialog -> setAttribute(Qt::WA_DeleteOnClose);
                setActDialog -> setWindowTitle("修改活动信息");
                setActDialog -> show();
            });
    QMenu *consumption = mBar -> addMenu("消费");
    QAction *newRecord = consumption -> addAction("新增消费记录");
    connect(newRecord, &QAction::triggered,
            [=] {
                ConsumptionDialog *consumptionDialog = new ConsumptionDialog(this);
                consumptionDialog -> setAttribute(Qt::WA_DeleteOnClose);
                consumptionDialog -> setWindowTitle("新增消费记录");
                consumptionDialog -> show();
            });
    QMenu *information = mBar -> addMenu("关于");
    QAction *about = mBar -> addAction("关于");
    connect(about, &QAction::triggered,
            [=]()
            {
                QString content =
                    "会员卡积分管理系统\n"
                    "当前版本：v 2.1.0\n"
                    "作者: 李祺彦\n"
                    "邮箱/QQ: 627812924\n"
                    "微信: lqy627182924\n";
                QMessageBox::information(this, "关于", content);
            });
    //工具栏，菜单项的快捷方式
    QToolBar *toolBar = addToolBar("tooBar");
    toolBar -> addAction(newCard);
    toolBar -> addAction(alterCard);
    toolBar -> addAction(curAct);
    toolBar -> addAction(setAct);
    toolBar -> addAction(newRecord);
    toolBar -> addAction(about);
    //状态栏
    QStatusBar *stBar = statusBar();
    QLabel *timeLabel = new QLabel("this");
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_time = current_date_time.toString("yyyy-MM-dd ddd");
    timeLabel -> setText(current_time);
    stBar -> addWidget(timeLabel);
    //设置内容显示方式
    //ui -> password1 -> setEchoMode(QlineEdit:::Password);
    //查找输入姓名
    QStringList sl;
    sl << "李祺彦" << "刘一希" << "朱俊杰" << "汪海杰" << "莫光严";
    QCompleter *comp = new QCompleter(sl, this);
    ui -> searchInput -> setCompleter(comp);
}

MainWindow::~MainWindow()
{
   delete ui;
}

void MainWindow::on_delButton_clicked()
{
//    //获取行编辑内容
//    QString name = ui -> lineEdit -> text();
//    QString str = QString("DELETE FROM `membercard`.`record`"
//                          "WHERE `name` = '%1'").arg(name);

//    //开启一个事务
//    QSqlDatabase::database().transaction();
//    QSqlQuery query;
//    query.exec(str);
    //获取选中的模型
    QItemSelectionModel *sModel = ui -> tableView -> selectionModel();
    //取出模型中的索引
    QModelIndexList list = sModel -> selectedRows();
    //删除所有选中的行
    for(int i = 0; i < list.size(); i++) {
        model -> removeRow(list.at(i).row());
    }
}

void MainWindow::on_sureButton_clicked()
{
    //确定
    //QSqlDatabase::database().commit();
    model -> submitAll();   //提交所有动作
}

void MainWindow::on_cancelButton_clicked()
{
    //取消操作
    model -> revertAll();   //取消所有动作
    model -> submitAll();   //提交所有动作
}

void MainWindow::on_addButton_clicked()
{
    //添加空记录
    QSqlRecord record = model -> record();  //获取空记录
    //获取行号
    int row = model -> rowCount();
    model -> insertRecord(row, record);
}

void MainWindow::on_searchButton_clicked()
{
    QString str = ui -> searchInput -> text();
    if(str.size() != 0) {
        if(tableName == "info"){
            QString sql = QString("name like '%%1%' or type like '%%1%' or phone like '%%1%' or sex like '%%1%'").arg(str);
            //等价于:
            //SELECT * FROM TABLE
            //WHERE name like 'str' or type like 'str' or phone like 'str';
            model -> setFilter(sql);
            model -> select();
            //model->setSort(0,Qt::AscendingOrder); //id属性，即第0列，升序排列
            //model->select();
        }
        else if(tableName == "card") {
            QString sql = QString("name like '%%1%' or type like '%%1%' or state like '%%1%'").arg(str);
            //等价于:
            //SELECT * FROM TABLE
            //WHERE name like 'str' or type like 'str' or phone like 'str';
            model -> setFilter(sql);
            model -> select();
        }
        else {
            QString sql = QString("name like '%%1%' or note like '%%1%'").arg(str);
            //等价于:
            //SELECT * FROM TABLE
            //WHERE name like 'str' or type like 'str' or phone like 'str';
            model -> setFilter(sql);
            model -> select();
        }
    }
    //删除查找内容后再按查找，则返回整张表
    else {
        showTable();
    }
}

void MainWindow::showTable() {

    model -> setTable(tableName);    //指定使用哪个表
    //把model放在view里面
    ui -> tableView -> setModel(model);
    QFont font;
    font.setPointSize(28);
    ui -> nameLabel -> setAlignment(Qt::AlignCenter);
    ui -> nameLabel -> setFont(font);
    if(tableName == "record") {
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui -> tableView -> verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
        //将第5列恢复正常显示
        ui -> tableView -> setItemDelegateForColumn(4, new QStyledItemDelegate(this));
        //显示model里的数据
        model -> select();
        model -> setHeaderData(0, Qt::Horizontal, "订单单号");
        model -> setHeaderData(1, Qt::Horizontal, "会员姓名");
        model -> setHeaderData(2, Qt::Horizontal, "消费时间");
        model -> setHeaderData(3, Qt::Horizontal, "消费金额");
        model -> setHeaderData(4, Qt::Horizontal, "备注");
        //设置数据库不允许修改
        ui -> tableView -> setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui -> nameLabel -> setText("会员消费记录表");
    }

    if(tableName == "info") {
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui -> tableView -> verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(6,QHeaderView::ResizeToContents);
        //隐藏第8列内容，因为第8页是用户的密码
        ui -> tableView -> setColumnHidden(7, true);
        //将4、5、6列恢复正常显示
        ui -> tableView -> setItemDelegateForColumn(3, new QStyledItemDelegate(this));
        ui -> tableView -> setItemDelegateForColumn(4, new QStyledItemDelegate(this));
        ui -> tableView -> setItemDelegateForColumn(5, new QStyledItemDelegate(this));
        //显示model里的数据
        model -> select();
        model -> setHeaderData(0, Qt::Horizontal, "会员卡号");
        model -> setHeaderData(1, Qt::Horizontal, "会员姓名");
        model -> setHeaderData(2, Qt::Horizontal, "性别");
        model -> setHeaderData(3, Qt::Horizontal, "手机号码");
        model -> setHeaderData(4, Qt::Horizontal, "会员卡类型");
        model -> setHeaderData(5, Qt::Horizontal, "办卡时间");
        model -> setHeaderData(6, Qt::Horizontal, "会员卡积分");
        //设置model编辑模式，手动提交修改
        model -> setEditStrategy(QSqlTableModel::OnManualSubmit);
        ui -> nameLabel -> setText("会员个人信息表");
    }

    if(tableName == "card") {
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui -> tableView -> verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
        ui -> tableView -> horizontalHeader()->setSectionResizeMode(6,QHeaderView::ResizeToContents);
        //设置4、5、6列显示为小数，保留小数点后两位
        ui -> tableView -> setItemDelegateForColumn(3, new NumberFormatDelegate(this));
        ui -> tableView -> setItemDelegateForColumn(4, new NumberFormatDelegate(this));
        ui -> tableView -> setItemDelegateForColumn(5, new NumberFormatDelegate(this));
        //显示model里的数据
        model -> select();
        model -> setHeaderData(0, Qt::Horizontal, "会员卡号");
        model -> setHeaderData(1, Qt::Horizontal, "会员姓名");
        model -> setHeaderData(2, Qt::Horizontal, "会员卡类型");
        model -> setHeaderData(3, Qt::Horizontal, "当前余额");
        model -> setHeaderData(4, Qt::Horizontal, "总消费额");
        model -> setHeaderData(5, Qt::Horizontal, "总节约金额");
        model -> setHeaderData(6, Qt::Horizontal, "会员卡状态");
        //设置model编辑模式，手动提交修改
        model -> setEditStrategy(QSqlTableModel::OnManualSubmit);
        ui -> nameLabel -> setText("会员卡信息表");
    }
}

