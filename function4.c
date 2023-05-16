#include<stdio.h>
int axe()
{
    int a=100,b=20,c;
    c=a+b;
    return c;

}

void main()
{
    int total,per;
    total=axe();
    per=total/2;
    printf("%d",total);
    printf("\n%d",per);
    return ;
}