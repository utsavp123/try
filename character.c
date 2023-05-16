#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],i,j,cnt;

    printf("enter the array string : ");
    gets(a);
    puts(a);
    cnt=strlen(a);

    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;a[j]!=NULL;j++)
        {
            if(i==j || i+j==cnt-1)
            {
                printf("%c",a[j]);
            }
            else
            {
                printf(" ");
            }   
        }
        printf("\n");

    }
}