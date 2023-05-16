#include<stdio.h>
void main()
{
    int a[100]={23,34,44,54,64};
    int n=5 ,i,index,value=333;
    printf("enter the position");
    scanf("%d",&index);

    for(i=n;i>index;i--)
    {
        a[i]=a[i-1];
    }
    a[index]=value;
    n++;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
 

    



    return ;
}