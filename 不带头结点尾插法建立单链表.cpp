LinkList List_TailInsert(LinkList &L)//正向建立单链表
{
    int x;//设ElemType为整型
    LNode *s,*r=L;//r为表尾指针
    scanf("%d",&x);//输入结点的值
    while (x!=9999)//输入9999表示结束
    {
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        s->next=NULL;
        if (L==NULL)//链表是否为空
        {
            L=s;//将新结点置位首结点也是尾结点
            r=L;
        }
        else
        {
            r->next=s;
            r=s;//新结点置为尾结点
        }
        scanf("%d", &x);
    }
    return L;
}