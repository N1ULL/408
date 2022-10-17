//前插操作：在p结点之前插入结点s
bool InsertPriorNode(LNode *p, LNode e)
{
    if (p==NULL||s==NULL)
    {
        return false;
    }
    s->next=p->next;
    p->next=s;//s连到p之后
    ElemType temp=p->data;//交换数据域部分
    p->data=s->data;
    s->data=temp;
    return true;
}