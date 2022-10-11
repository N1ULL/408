bool Del_s_t2(Sqlist &L,ElemType s,ElemType t)//删除有序顺序表L中值在给定值s与t之间的所有元素
{
    int i,j;
    if (s>t||L.length==0)
    {
        return false;
    }
    for ( i = 0; i < L.length&&L.data[i]<s; i++);//寻找值大于等于s的第一个元素
    if (i>=L.length)
        return false;
    for ( j = 0; j < L.length&&L.data[j]<=t; j++);//所有元素均小于s，返回
    for (; j < L.length; i++,j++)//寻找值大于t的第一个元素
        L.data[i]=L.data[j];//前移，填补被删元素位置
    L.length=i;
    return true;
    
}