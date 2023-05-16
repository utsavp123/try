#include<stdio.h>
void abc()
{

    printf("hello\n");
}


void main()
{
    abc();
    int a;
    for(a=1;a<=50;a++)
    {
        abc();
    }
    return ;
}
