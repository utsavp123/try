#include<stdio.h>
void main()
{
    int a[100],i,n,max;
    printf("enter the array ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);


    }
    max=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }

        }
            printf("max=%d\n",max);



    return ;
}