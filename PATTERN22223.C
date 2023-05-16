#include<stdio.h>
int main()
{
    int i,j;
   int k=1;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=i;j++)
        {
            if(j<k)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }    
        }
        printf("\n");
    }


    return 0;
}