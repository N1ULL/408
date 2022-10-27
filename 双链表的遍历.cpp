//后向遍历
while (p!=NULL)
{
    p=p->next;//对结点p做相应处理
}

//前向遍历
while (p!=NULL)
{
    p=p->prior;//对结点p做相应处理
}

//前向遍历(跳过头结点)
while (p->prior!=NULL)
{
    p=p->prior;//对结点p做相应处理
}