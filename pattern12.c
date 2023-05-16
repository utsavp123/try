#include<stdio.h>
void main()
{
    
    char i,j,c='A';
    

    for(i=65;i<=70;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%C",c);
            c++;
        }
        printf("\n");
    }
return ;
}