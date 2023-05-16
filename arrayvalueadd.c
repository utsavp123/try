#include<stdio.h>
void main()
{
    int pos,ele;
    printf("enter the number");
    scanf("%d",&n);
    int a[n];
    int i;
   

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter the positation");
    scanf("%d",&pos);
    printf("enter the Element");
    scanf("%d",&ele);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    n++;
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }





    return ;
}