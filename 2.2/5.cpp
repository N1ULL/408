bool Del_s_t(SqList &L,Elemtype s,Elemtype t)//删除有序顺序表L中值在给定值s与t（要求s<t）之间的所有元素
{
    int i,j;
    if (L.length==0||s>=t)
    {
        return false;//线性表为空或s、t不合法，返回
    }
    for ( i = 0; i < L.length; i++)
    {
        if (L.data[i]>=s&&L.data[i]<=t)
        {
            k++;
        }
        else
        {
            L.data[i-k]=L.data[i];//当前元素前移k个单位
        }//for
        L.length-=k;//长度减小
        return true;
    }
    
    
}