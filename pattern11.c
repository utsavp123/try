#include<stdio.h>

void main()
{

    int i,j;
    char a[100];
    printf("enter the string");
    scanf("%s",&a);
    puts(a);
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }

    return ;
}