#include<stdio.h>
void main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<=9;j++)
        {
            
                if((i<5 && j==5-i || j==5+i) || (i>=5 && j==i-4 ) )
                {
                    printf("*");

                }
                else
                {
                    printf(" ");
                }
                
        }
        
        printf("\n");
    }
}