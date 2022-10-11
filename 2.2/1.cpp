bool Del_Min(sqList &L,ElemType &value)
{
    //删除顺序表L中的最小元素结点，并通过引用型参数value返回其值
    //若删除成功，则返回true；否则返回false
    if (L.length==0)
    {
        return false;//表空，中止操作返回
    }
    value=L.data[0];
    int pos=0;//假定0号元素的值最小
    for (int i = 0; i < L.length; i++)//循环，寻找具有最小值的元素
    {
        if (L.data[i]<value)//
        {
            value = L.data[i];
            pos = i;
        }
        
    }
    L.data[pos]=L.data[L.length-1];//空出的位置由最后一个元素填补
    L.length--;
    return true;//此时，value即为最小值
}