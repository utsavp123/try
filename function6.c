#include<stdio.h>
int mul( int i,int multi,int n)
{
    
    for(i=1;i<=n;i++)
    {
       multi=multi*i; 
    } 
    return multi;
}

void main()
{
    int i=1,n,multi=1;
    printf("enter the number");
    scanf("%d",&n);

    printf(" mul=%d",mul(i,multi,n));


      return ;
}