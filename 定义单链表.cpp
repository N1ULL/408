typedef struct LNode //定义单链表节点类型
{
    ElemType data;//每个节点存放一个数据元素
    struct LNode *next;//指针指向下一个节点
}LNode,*LinkList;

struct LNode//定义单链表节点类型
{
    ElemType data;//每个节点存放一个数据元素
    struct LNode *next;//指针指向下一个节点
};
typedef struct LNode LNode;
typedef struct LNode *LinkList;

LNode * L;//声明一个指向单链表第一个节点的指针
LinkList L;//声明一个指向单链表第一个节点的指针