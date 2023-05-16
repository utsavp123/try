#include<stdio.h>

void main()
{
int i,n;
char j='A';
printf("enter the number");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
    for(j=5;j>=i;j--)
    {
        printf("%c",j);
        
    }
    printf("\n");
}
return ;

}