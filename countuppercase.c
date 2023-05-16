#include<stdio.h>
void main()
{
    char a[100],cnt,j,i;

    printf("enter the string");
    gets(a);
    puts(a);
    

    for(i=0;a[i]!=NULL;i++)
    {
        for(j='A';j<='Z';j++)
        {
            if(a[i]==j)
            {
                cnt++;
            }
        }
    }
    printf("\ncount upper charatcter=%d",cnt);

    return ;
}