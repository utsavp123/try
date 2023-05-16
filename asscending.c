#include<stdio.h>
void main()
{
    

    int a[100],n,i,j,temp;
    printf("enter the array ");
    scanf("%d",&n);
   

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
for(i=0;i<n;i++)
{
    printf("\na[%d]=%d",i,a[i]);
}
return ;
}