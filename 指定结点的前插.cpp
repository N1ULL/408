//前插操作：在p结点之前插入结点s
bool InsertPriorNode(LNode *p, ElemType e)
{
    if (p==NULL)
    {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s==NULL)
    {
        return false;
    }
    s->next=p->next;
    p->next=s;//新结点s连到p之后
    s->data=p->data;//将p中元素复制到s中
    p->data=e;//p中元素覆盖为e
    return true;
}