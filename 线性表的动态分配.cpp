#include<stdio.h>
#include<stdlib.h>

#define InitSize 10
typedef struct
{
    int *data;
    int MaxSize;
    int length;
}SeqList;//定义结构体

void InitList(SeqList &L)
{
    L.data=(int *)malloc(InitSize*sizeof(int));
    L.length=0;
    L.MaxSize=InitSize;//创建顺序表
}

void IncreaseSize(SeqList &L, int len)
{
    int *p=L.data;
    L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
    for (int i = 0; i < L.length; i++)
    {
        L.data[i]=p[i];
    }
    L.MaxSize=L.MaxSize+len;
    free(p);//动态加入新的顺序表
    
}

int main()
{
    SeqList L;
    InitList(L);
    IncreaseSize(L,10);
    return 0;
}