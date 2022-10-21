LinkList List_HeadInsert(LinkList &L)//正向建立单链表
{
    LNode *s//要插入的结点
    int x;//要插入的元素
    scanf("%d",&x);//输入结点的值
    while (x!=9999)//输入9999表示结束
    {
        s=(LNode *)malloc(sizeof(LNode));//创建新结点
        s->data=x;
        s->next=NULL;
        if (L==NULL)
        {
            L=s;//将新结点置为首结点也是尾结点
        }
        else
        {
            s->next=*L;
            L=s;//新结点置位尾结点
        }
        scanf("%d",&x);
    }
    return L;
}