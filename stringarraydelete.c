#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n,index;

    printf("enter the string");
    gets(a);
    puts(a);

    printf("enter the position");
    scanf("%d",&index);

    for(i=index;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d",i,a[i]);
    }

    return 0;
}