void Reverse(Sqlist &L)
{
    Elemtype temp;//辅助变量
    for (int i = 0; i < L.length/2; i++)
    {
        temp=L.data[i];//交换L.data[i]与L.data[L.length-i-1]
        L.data[i]=L.data[L.length-i-1];
        L.data[L.length-i-1]=temp;
    }
    
}