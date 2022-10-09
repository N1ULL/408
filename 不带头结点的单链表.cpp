#include<stdio.h>
#include<stdlib.h>

typedef struct LNode //定义单链表节点类型
{
    int data;//每个节点存放一个数据元素
    struct LNode *next;//指针指向下一个节点
}LNode,*LinkList;

bool InitList(LinkList &L)
{
    L = NULL;//空表，暂时没有任何结点
    return true;
}

void test()
{
    LinkList L;//声明一个指向单链表的指针
    //初始化一个空表
    InitList(L);
    //...后续代码...
}
