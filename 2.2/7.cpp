bool Merge(SeqList A,SeqList B,SeqList &C)
{
    if (A.length+B.length>C.maxSize)//大于顺序表的最大长度
    {
        return false;
    }
    int i=0,j=0,k=0;
    while (i<A.length&&j<B.Length)//循环，两两比较，小的存入结果表
    {
        if(A.data[i]<=B.data[j])
        {
            C.data[k++]=A.data[i++];
        }
        else
        {
            C.data[k++]=B.data[j++];
        }
        
    }
    while (i<A.length)//还剩一个没有比较完的顺序表
    {
        C.data[k++]=A.data[i++];
    }
    while (j<B.length)
    {
        C.data[k++]=B.data[i++];
    }
    C.length=k;
    return true;
    
}