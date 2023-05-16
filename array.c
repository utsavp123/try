#include<stdio.h>
void main()
{
    int i,j,n,a[100][100],sum=0,min,max;
    printf("enter the array series");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d]][%d]",i,j);
            scanf("%d",&a[i][j]);

        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           sum=sum+a[i][j];

        }
    }
    printf("sum=%d\n",sum);
     for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
           sum=sum+a[i][j];

        }
        printf("row=%dsum=%d\n",i,sum);
    }
   
    

    return ;
}