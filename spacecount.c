#include<stdio.h>
void main()
{
    char a[100],cnt,j,i;

    printf("enter the string");
    gets(a);
    puts(a);
    

    for(i=0;a[i]!=NULL;i++)
    {
        
            if(a[i]==32)
            {
                cnt++;
            }
        
    }
    printf("\ncount space =%d",cnt);

    return ;
}