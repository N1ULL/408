typedef struct
{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;
//后插操作：在p结点之后插入元素e
bool InsertNextNode(LNode *p, ElemType e)
{
    if (p==NULL)
    {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s==NULL)//内存分配失败
    {
        return false;
    }
    s->data=e;//用结点s保存数据元素e
    s->next=p->next;
    s->next=s;//将结点s连到p之后
    return true;
}