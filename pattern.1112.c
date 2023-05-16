#include<stdio.h>
void main()
{
    int i,n,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j=n*2;j++)
        {
            if(j<=i || j<=11-i)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }



    return ;
}