#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=1+i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}    