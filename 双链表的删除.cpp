//删除p的后继节点q
bool DeleteNextDNode(DNode *p)
{
    if (p==NULL)
    {
        return false;
    }
    DNode *q=p->next;//找到p的后继结点
    if (q==null)//p没有后继
    {
        return false;
    }
    p->next=q->next;
    if (q->next!=NULL)//q结点表示最后一个结点
    {
        q->next->prior=p;
    }
    free(q);//释放结点空间
    return true;
}
void DestoryList(DLinklist &L)
{
    //循环释放各个数据结点
    while (L->next!=NULL)
    {
        DeleteNextDNode(L);
    }
    free(L);//释放头节点
    L=NULL;//头指针指向NULL
}