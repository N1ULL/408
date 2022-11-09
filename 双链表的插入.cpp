//在p结点之后插入s结点
bool InsertNextDNode(DNode *p, DNode *s)
{
    s->next=p->next;
    p->next->prior=s;
    s->prior=p;
    p->next=s;
}