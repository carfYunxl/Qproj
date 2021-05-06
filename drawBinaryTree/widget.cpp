#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "binarytree.h"
#include <QVector>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //窗口大小设定
    QGraphicsScene *scene = new QGraphicsScene(-400,-400,800,800,this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    //创建一颗二叉树，并在二叉树的节点位置画圆，用直线将结点连接起来
    QVector<QPair<int,QPointF>> vec;
    QPair<int,QPointF> p1 = qMakePair(10,QPointF(0,-200));
    QPair<int,QPointF> p2 = qMakePair(20,QPointF(-200,-100));
    QPair<int,QPointF> p3 = qMakePair(30,QPointF(200,-100));
    QPair<int,QPointF> p4 = qMakePair(40,QPointF(-300,0));
    QPair<int,QPointF> p5 = qMakePair(50,QPointF(-100,0));
    QPair<int,QPointF> p6 = qMakePair(60,QPointF(100,0));
    QPair<int,QPointF> p7 = qMakePair(70,QPointF(300,0));
    QPair<int,QPointF> p8 = qMakePair(80,QPointF(0,100));

    vec.push_back(p1);
    vec.push_back(p2);
    vec.push_back(p3);
    vec.push_back(p4);
    vec.push_back(p5);
    vec.push_back(p6);
    vec.push_back(p7);
    vec.push_back(p8);


    binaryTree *t = new binaryTree;
    binaryTreeNode *node = new binaryTreeNode;
    t->createBinaryTree(&node);

}

Widget::~Widget()
{
    delete ui;
}

