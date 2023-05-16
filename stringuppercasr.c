#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100],rev;
    int i,cnt;

    printf("enter the string : ");
    gets(a);
    puts(a);

    for(i=0;a[i]!=NULL;i++)
    {
        b[i]=a[i]-32;
    }
    printf("convert in capital=%s",b[i]);
    puts(b);

    cnt=strlen(a);
    printf("count value=%d\n",cnt);
   
   for(i=cnt-1;i>=0;i--)
   {
       printf("%c",a[i]);
   }

    return ;  
}