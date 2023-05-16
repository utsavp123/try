#include<stdio.h>
int abc( int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    } 

}

void main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);

    abc(n);

    return ;
}