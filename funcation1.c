#include<stdio.h>
int mul(int i,int n,int muln)
{
 for(i=1;i<=n;i++)
    {
        muln=muln*i;
    }


return muln;
}




void main()
{
    int i,n,muln=1;
    
        printf("enter the number");
        scanf("%d",&n);
    
    mul(i,n,muln);
    printf("\nmul=%d",mul(i,n,muln));
        return ;
}
