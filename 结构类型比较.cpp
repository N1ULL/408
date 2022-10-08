#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int num;
    int people;
}Customer;

int main()
{
    Customer a;
    a.num=1;
    a.people=1;
    Customer b;
    b.num=1;
    b.people=2;
    if (a.num == b.num && a.people == b.people)
    {
        printf("相等");
    }
    else
    {
        printf("不相等");
    }
    return 0;
    
}
