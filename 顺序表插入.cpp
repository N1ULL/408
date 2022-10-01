#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10
typedef struct
{
    int data[MaxSize];
    int length;
}SqList;

bool ListInsert(SqList &L,int i,int e)
{
    if (i<1||i>L.length+1)
    {
        return false;
    }
    if (L.length>=MaxSize)
    {
        return false;
    }
    for (int j = L.length; j >= i; j--)
    {
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return true;
        
}