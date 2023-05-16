#include<stdio.h>

void main()
{
    int arm=0,n,c,r;

    printf("enter the number");
    scanf("%d",&n);

    c=n;

    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armsstrong");
    }
    return ;
}
