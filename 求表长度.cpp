//求表的长度
int Length(LinkList L)
{
    int len=0;//统计表的长度
    LNode *p = L;
    while (p->next!=NULL)
    {
        p=p->next;
        len++;
    }
    return len;
}