#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        k=0;
         for(j=0;j<=9;j++)
        {
            if(j>=5-i && j<=5+i)
            {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
                                                                                   
            
            j<=5?k++:k--;
                printf("%d",k);
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