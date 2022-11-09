struct int ElemType
typedef struct DNode
{
    ElemType data;
    struct DNode *prior,*next;
}DNode,*DLinklist;
//初始化空的循环双链表
bool InitDLinkList(DLinklist &L)
{
    L=(DNode *)malloc(sizeof(DNode));
    if (L==NULL)
    {
        return false;
    }
    L->prior=L;
    L->next=L;
    return true;
}
//判断结点p是否为循环双链表的表尾结点
bool isTail(DLinklist L,DNode *p)
{
    if (p->next==L)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
bool Empty(DLinklist L)
{
    if (L->next==L)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
void testDLinkList()
{
    //初始化循环双链表
    DLinklist L;
    InitDLinkList(L);
    //后续代码...
}