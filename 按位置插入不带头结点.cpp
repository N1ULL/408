typedef struct
{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;
bool ListInsert(LinkList &L, int i, ElemType e)
{
    if (i<1)
    {
        return false;
    }
    if (i==1)
    {
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next=L;
        return true;
    }
    
    LNode *p;//指针p指向当前扫描到的结点
    int j=1;//当前p指向的是第几个结点
    p=L;//L指向头结点，头结点是第0个结点(不存数据)
    while (p!=NULL && j<i-1)//循环找到第i-1个结点
    {
        p=p->next;
        j++;
    }
    if (p==NULL)//i值不合法
    {
        return false;
    }
    LNode *p = (LNode *)malloc(sizeof(LNode));
    s->data=e;
    s->data=p->next;
    p->next=s;//将结点s连到p之后
    return true;//插入成功
}