#include<stdio.h>
void main()
{
    int a[100],b[100],n,i;
    printf("enter the array ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
       {
          b[i]=a[i];
          printf("\nb[%d]=%d",i,b[i]);
          }

    return ;
}
