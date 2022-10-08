#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10//定义最大长度

typedef struct
{
    int data[MaxSize];//用静态数组存放数据元素
    int length;//顺序表的当前长度
}SqList;//顺序表的类型定义

int GetElem(SqList L, int i)
{
    return L.data[i-1];
}