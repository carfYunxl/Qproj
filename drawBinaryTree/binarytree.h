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

    char data;//������
    binaryTreeNode *lchild;//����ָ��
    binaryTreeNode *rchild;//�Һ���ָ��

    //�������
    QPointF pf = QPointF(0,0);
};
class binaryTree
{
public:
    binaryTree();//Ĭ�Ϲ��캯��
    ~binaryTree();//Ĭ����������
    //���ƹ��캯��
    //�ƶ����캯��
    //Ĭ������ת��
    //���������

    //����������
    void createBinaryTree(binaryTreeNode **node);
    //ǰ�����������
    void preOrderBinaryTree(binaryTreeNode **node,int level);
    //�����������
    void getTreeDepth();
private:
    //�����������
    int depth = 0;
    //Ҷ�ӽڵ��־
    char value = '1';
};

#endif // BINARYTREE_H
