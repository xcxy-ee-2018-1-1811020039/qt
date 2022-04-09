#include "cashierForm.h"
#include "ui_cashierform.h"

#include <QFile>

CashierForm::CashierForm(User user, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CashierForm),
    cashier(user)
{
    QFile qss(":/white.qss");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
    ui->setupUi(this);
    this->setWindowTitle("收银");
    //this->setFixedSize(570, 430);
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);
    QStringList headList;
    headList<< "菜品编号" << "菜名" << "价格" << "状态";
    ui->tableWidget->setColumnCount(headList.count());
    ui->tableWidget->setHorizontalHeaderLabels(headList);
    QString str = QString("用户： %1").arg(user.getName());
    ui->label->setText(str);
}

CashierForm::~CashierForm()
{
    delete ui;
}

QString CashierForm::createBillId()
{
    DBHelper helper;
    QSqlQuery query(helper.getDB());
    //根据时间生成billid
    QString billid = QString(QDate::currentDate().toString("yyMMdd"));
    QString timeid = QString(QTime::currentTime().toString("hh::mm::s"));
    int count = 1;
    QString sql = QString("SELECT COUNT(DISTINCT billid) FROM bills WHERE billid like '%1%' ").arg(billid);
    bool ret = query.exec(sql);
    if(!ret){
        QSqlError err = query.lastError();   //得到最近一次的错误信息
        QString str = QString("cash45错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
        qDebug()<< str << endl;
    }
    if(query.next()){
        count = query.value(0).toInt() + 1; // 获取同一时间生成的订单数
    }
    QString temp = QString("0000%1").arg(count);
    //qDebug()<<" temp: "<<temp<<endl;
    //billid += temp.right(4);
    billid += timeid;
    //qDebug()<<" billid "<<billid<<endl;
    return billid;
}


void CashierForm::updateTime()
{
    QDateTime curDateTime = QDateTime::currentDateTime();
    QString cur = curDateTime.toString("yyyy.MM.dd hh:mm:ss ddd");
    ui->label_2->setText(cur);
}

void CashierForm::on_pushButton_clicked()
{
    //查询
    if(ui->lineEdit->text().isEmpty()){
        return;
    }
    curTableId = ui->lineEdit->text().toInt();
    DBHelper helper;
    QSqlQuery query(helper.getDB());

    QString sql = QString("select * from orders where tableid = %1").arg(curTableId);
    totalPrice = 0;
    bool ret = query.exec(sql);
    if(!ret){
        QSqlError err = query.lastError();   //得到最近一次的错误信息
        QString str = QString("cash81错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
        qDebug()<< "in 查询"<< str << endl;
    }
    ui->tableWidget->setRowCount(0);
    QSqlQuery query2(helper.getDB());
    while(query.next()){
        int rowCount = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(rowCount);
        int dishid = query.value(2).toInt();
        QString sql2 = QString("select * from menu where dishid = %1").arg(dishid);
        ret = query2.exec(sql2);
        if(!ret){
            QSqlError err = query2.lastError();   //得到最近一次的错误信息
            QString str = QString("cash94错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
            qDebug()<< str << endl;
        }
        if(query2.next()){
            for(int i=0; i<3; i++){
                QTableWidgetItem *item = new QTableWidgetItem(query2.value(i).toString());
                ui->tableWidget->setItem(rowCount, i, item);
            }
            if(3 == query.value(3).toInt()){
                QTableWidgetItem *item = new QTableWidgetItem("已做");
                ui->tableWidget->setItem(rowCount, 3, item);
                totalPrice += query2.value(2).toDouble();
                //qDebug()<< "price :" << query2.value(2).toDouble();
            }else{
                QTableWidgetItem *item = new QTableWidgetItem("未做");
                ui->tableWidget->setItem(rowCount, 3, item);
            }
        }
    }
    QString billid = createBillId();
    ui->label_6->setText(billid);
    ui->label_7->setText(QString("总计： %1").arg(totalPrice));
}

void CashierForm::on_pushButton_3_clicked()
{
    ui->lineEdit->setText("");
}

void CashierForm::on_pushButton_2_clicked()
{
    //结账
    if("" == ui->label_6->text()){
        return;
    }
    QString billid = ui->label_6->text();
    DBHelper helper;
    QSqlQuery query(helper.getDB());
    QSqlQuery query2(helper.getDB());
    QSqlQuery query3(helper.getDB());
    QString sql = QString("select * from orders where tableid = %1").arg(curTableId);
    QString sql2 = QString("select * from orders where tableid = %1").arg(curTableId);

    bool ret = query.exec(sql);
    if(!ret){
        QSqlError err = query.lastError();   //得到最近一次的错误信息
        QString str = QString("cash138错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
        qDebug()<< str << endl;
    }
    while(query.next()){
        qDebug()<< query.value(2).toInt() << "dishid";
        sql2 = QString("select * from menu where dishid = %1").arg(query.value(2).toInt());
        //sql2 = QString("select * from menu where dishid = 1");
        ret = query3.exec(sql2);
        if(!ret){
            QSqlError err = query2.lastError();   //得到最近一次的错误信息
            QString str = QString("cash48错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
            qDebug()<< str << endl;
        }
        query3.next();
        sql = QString("insert into bills values('%1', %2, %3, '%4', %5, '%6', %7)")
                .arg(billid)
                .arg(query.value(1).toInt())
                .arg(query.value(2).toInt())
                .arg(query3.value(1).toString())
                .arg(query3.value(2).toInt())
                .arg(cashier.getName())
                .arg(query.value(3).toInt());
        qDebug()<< query3.value(1) << "dishname";
        ret = query2.exec(sql);
        if(!ret){
            QSqlError err = query2.lastError();   //得到最近一次的错误信息
            QString str = QString("cash161错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
            qDebug()<< str << endl;
        }
        sql = QString("delete from orders where tableid = %1 and dishid = %2")
                .arg(query.value(1).toInt())
                .arg(query.value(2).toInt());
        ret = query2.exec(sql);
        if(!ret){
            QSqlError err = query2.lastError();   //得到最近一次的错误信息
            QString str = QString("cash161错误信息:%1, %2").arg(err.driverText()).arg(err.databaseText());
            qDebug()<< str << endl;
        }
    }
    while(ui->tableWidget->rowCount() > 0){
        ui->tableWidget->removeRow(ui->tableWidget->rowCount()-1);
    }
    ui->label_6->setText("");
    ui->label_7->setText("总计：");
    totalPrice = 0;

}
