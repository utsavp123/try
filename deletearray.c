#include<stdio.h>
vodi main()
{
    int a[100]={23,34,44,54,64};
    int n=5 , index=2,i;
    for(i=index;i<=n;i++)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n-1;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
 

    



    return ;
}