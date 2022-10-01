#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10

typedef struct
{
    int data[MaxSize];//用静态数组存放数据元素
    int length;//顺序表的类型定义
}SqList;

bool ListDelete(SqList &L,int i,int &e)
{
    if (i<1||i>L.length)//判断i的范围有效
    {
        return false;
    }
    e=L.data[i-1];//将被删除的元素赋值给e
    for (int j = i; j < L.length; j++)//将第i个位置的元素前移
    {
        L.data[j-1]=L.data[j];
    }
    L.length--;//线性表长度减一
    return true;
    
}

void InitList(SqList &L)
{
    L.length = 0;
}

int main()
{
    SqList L;//声明一个顺序表
    InitList(L);//初始化顺序表
    for (int i = 0; i < 4; i++)
    {
        L.data[i]=i;
        L.length++;
    }
    int e = -1;//用e把删除的元素“带回来”
    if (ListDelete(L,3,e))
    {
        printf("已删除第3个元素，元素值为=%d",e);
    }
    else
        printf("位序i不合法，删除失败");

}