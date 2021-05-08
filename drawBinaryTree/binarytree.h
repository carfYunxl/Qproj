/*------------------------------------------------------------------------------------------------------
 * binary definition
 * 1.binaryTreeNode struct
 * 2.binaryTree class
------------------------------------------------------------------------------------------------------*/
#include <QPointF>
#include <QPair>
#ifndef BINARYTREE_H
#define BINARYTREE_H

class binaryTreeNode
{
public:
    binaryTreeNode():data(0),lchild(nullptr),rchild(nullptr),pf(QPointF(0,0)){
    };
    binaryTreeNode(int d,QPointF p):data(d),lchild(nullptr),rchild(nullptr),pf(p){
    };
    ~binaryTreeNode();

    char data;//数据域
    binaryTreeNode *lchild;//左孩子指针
    binaryTreeNode *rchild;//右孩子指针

    //结点坐标
    QPointF pf = QPointF(0,0);
};
class binaryTree
{
public:
    binaryTree();//默认构造函数
    ~binaryTree();//默认析构函数
    //复制构造函数
    //移动构造函数
    //默认类型转换
    //运算符重载

    //创建二叉树
    void createBinaryTree(binaryTreeNode **node);
    //前序遍历二叉树
    void preOrderBinaryTree(binaryTreeNode **node,int level);
    //二叉树的深度
    void getTreeDepth();
private:
    //二叉树的深度
    int depth = 0;
    //叶子节点标志
    char value = '1';
};

#endif // BINARYTREE_H
