#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int *data;//指示动态分配数组的指针
    int MaxSize;//顺序表的最大容量
    int length;//顺序表的当前长度
}SqList;//顺序表的类型定义

int LocateElem(SqList L, int e)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i]==e)
        {
            return i+1;
        }
        
    }
    return 0;
    
}