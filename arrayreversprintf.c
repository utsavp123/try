#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("enter the array of number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("\na[%d]=",i);
        printf("%d",a[i]);
       
    }


    return ;
}