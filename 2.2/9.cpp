void SearchExchangeInsert(ElemType A[], ElemType x)
{
    int low=0,high=n-1,mid;//low和high指向顺序表下界和上界的下标
    while (low<=high)
    {
        mid=(low+high)/2;//找中间位置
        if(A[mid]==x)  break;//找到x，退出while循环
        else if(A[mid]<x)  low=mid+1;//到中点mid的右半部分去查
        else high=mid-1;//到中点mid的左半部分去查
    }//下面两个if语句只执行一个
    if (A[mid]==x&&mid!=n-1)//若最后一个元素与x相等，则不存在与其后继交换的操作
    {
        t=A[mid];A[mid]=A[mid+1];A[mid+1]=t;
    }
    if (low>high)//查找失败，插入数据元素x
    {
        for(i=n-1;i>high;i--)  A[i+1]=A[i];//后移元素
        A[i+1]=x;//插入x
    }//结束插入
    
    
}