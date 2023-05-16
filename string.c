#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i;

    printf("enter the string=");
   gets(a);
    puts(a);
    printf("enter the string=");
   gets(b);
    puts(b);


    i=strlen(a);
    printf("\ncount=%d", i);
    
    i=strcmp(a,b);
    printf("\ncoparevalue=%d",i);

    strupr(a);
    printf("\nupper case=");
    puts(a);
    return ; 
}
