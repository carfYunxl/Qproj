#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //set
    setWindowTitle("tree create show!");
    //tool
    scene = new QGraphicsScene(-400,-400,800,800,this);
    myPen.setColor(Qt::blue);
    myBrush.setColor(Qt::green);
    //draw
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing);


}

Widget::~Widget()
{
    delete ui;
}

//创建根按钮点击
void Widget::on_pushButton_clicked()
{
    qreal x = ui->lineEdit_posx->text().toInt();
    qreal y = ui->lineEdit_posy->text().toInt();
    scene->addEllipse(x,y,50,50,myPen,myBrush);
    scene->addSimpleText(ui->lineEdit_num->text());

    //新建结点
    nor_tree_node *node = new nor_tree_node(ui->lineEdit_num->text(),x,y);

}
