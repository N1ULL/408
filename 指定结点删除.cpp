//
bool DeleteNode(LNode *p)
{
    if (p==NULL)
    {
        return false;
    }
    LNode *q=p->next;//令q指向*p的后继结点
    p->data=p->next->data;//和后继结点交换数据域
    p->next=q->next;//将*q结点从链中"断开"
    free(q);//释放后继结点的存储空间
    return true;
}