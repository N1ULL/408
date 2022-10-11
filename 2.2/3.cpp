void del_x_1(Sqlist &L,Elemtype x)
{
    //本算法实现删除顺序表L中所有值为x的数据元素
    int k=0,i;//记录值不等于x的元素个数
    for (i = 0; i < L.length; i++)
    {
        if (L.data[i]!=x)
        {
            L.data[k]=L.data[i];
            k++;//不等于x的元素增1
        }
        
    }
    L.length=k//顺序表L的长度等于k
    
}
void del_x_2(Sqlist &L,Elemtype x)
{
    int k=0,i;//记录值不等于x的元素个数
    while (I<L.length)
    {
        if (L.data[i]==x)
        {
            k++;
        }
        else
        {
            L.data[i-k]=L.data[i];//当前元素前移k个单位
        }
        i++; 
    }
    
    L.length=L.length-k;//顺序表L的长度递减
}