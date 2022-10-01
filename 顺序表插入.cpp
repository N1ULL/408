#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10 //定义最大长度
typedef struct
{
    int data[MaxSize];//用静态数组存放数据元素
    int length;//顺序表的类型定义
}SqList;

bool ListInsert(SqList &L,int i,int e)
{
    if (i<1||i>L.length+1)//判断i范围是否有效
    {
        return false;
    }
    if (L.length>=MaxSize)//当前存储空间已满，不能插入
    {
        return false;
    }
    for (int j = L.length; j >= i; j--)//将第i个元素及之后的元素后移
    {
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;//在位置i处放入e
    L.length++;//长度加一
    return true;
        
}
