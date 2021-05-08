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
    myPen.setColor(Qt::red);
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

    //新建结点
    treeNode *node = new treeNode(ui->lineEdit_num->text(),x,y);
    t.push_back(node);

    scene->addEllipse(x,y,30,30,myPen,myBrush);
    if(t.size() > 1)
    {
        qreal x1 = t.at(t.size() - 1)->getX();
        qreal y1 = t.at(t.size() - 1)->getY();
        qreal x2 = t.at(t.size() - 2)->getX();
        qreal y2 = t.at(t.size() - 2)->getY();
        QLineF l(x1+15,y1+15,x2+15,y2+15);
        scene->addLine(l,myPen);
    }


}
