#include<stdio.h>
#include<stdlib.h>
#define InitSize 10//定义最大长度

typedef struct
{
    int *data;//指示动态分配数组的指针
    int MaxSize;//顺序表的最大容量
    int length;//顺序表的当前长度
}SqList;//顺序表的类型定义

int GetElem(SqList L, int i)
{
    return L.data[i-1];
}