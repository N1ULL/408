//按值查找，找到数据域==e 的结点
LNode * LocateElem(LinkList L, ElemType e)
{
    LNode *p = L->next;
    //从第一个结点开始查找数据域为e的结点
    while (p!=NULL && p->data!=e)
    {
        p=p->next;
    }
    return p;//找到后返回结点指针，否则返回NULL
}