#include<stdio.h>
void main()
{
    int i,index,n,a[100],value;

    printf("enter the number of array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter the position");
    scanf("%d",&index);

    printf("enter the value");
    scanf("%d",&value);

    for(i=n;i>index;i--)
    {
        a[i]=a[i-1];
    }
    a[index]=value;
    for(i=0;i<n+1;i++)
    {
        printf("a[%d]=%d",i,a[i]);
    }

    return ;
}