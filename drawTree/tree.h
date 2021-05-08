#ifndef TREE_H
#define TREE_H
#include <iostream>

#include <QString>
#include <QPointF>
#include <QVector>
class treeNode
{
public:
    treeNode():child(nullptr),str(""){}
    treeNode(QString st,qreal xx,qreal yy):child(nullptr),str(st),x(xx),y(yy){}
    ~treeNode(){}

    qreal getX()
    {
        return this->x;
    }
    qreal getY()
    {
        return this->y;
    }

private:
    treeNode *child;
    QString str;

    qreal x = 0;
    qreal y = 0;

};

#endif // TREE_H
