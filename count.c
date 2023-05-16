#include<stdio.h>
void main()
{
    

    int a[100],b[100],n,i,j,cnt=0;
    printf("enter the array ");
    scanf("%d",&n);
    printf("enter the value of j");
    scanf("%d",&j);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(j==a[i])
        {
            cnt++;
        }

    }
printf("%d is found %d time",j,cnt);

    return ; 
}
