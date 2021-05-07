#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QVector>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class nor_tree_node;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene *scene;
    QPen myPen;
    QBrush myBrush;
    QVector<nor_tree_node> nt;
};

class nor_tree_node{
public:
    nor_tree_node():lchild(nullptr),rchild(nullptr),str(""),root(nullptr){}
    nor_tree_node(QString st,qreal xx,qreal yy):lchild(nullptr),rchild(nullptr),str(st),root(nullptr),x(xx),y(yy){}
    ~nor_tree_node(){}

private:
    nor_tree_node *lchild;
    nor_tree_node *rchild;
    QString str;

    nor_tree_node *root;
    qreal x = 0;
    qreal y = 0;


};
#endif // WIDGET_H
