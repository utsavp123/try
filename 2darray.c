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
        sum=0;
        for(j=0;j<n;j++)
        {
           sum=sum+a[i][j];     

        }
          printf("\nraw=%dsum=%d",i,sum);


    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
           sum=sum+a[j][i];     

        }
          printf("\ncoloum=%dsum=%d",i,sum);


    }
    sum=0;
     for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];     
            }
        }
          


    }
 printf("\nleft dignol=sum=%d",sum);
  sum=0;
     for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum=sum+a[i][j];     
            }
        }
          


    }
 printf("\nright dignol=sum=%d",sum);

  for(i=0;i<n;i++)
    {
        max=a[0][0];
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];     
            }

        }
        printf("\nrawmax=%dmax=%d",i,max);

    }
    for(i=0;i<n;i++)
    {
        min=a[0][0];
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];     
            }

        }
        printf("\nrawmin=%dmin=%d",i,min);

    }
  
 


return ;

}