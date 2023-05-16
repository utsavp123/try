#include<stdio.h>

int main()
{
    
    
    int i,rem,n,sum=0;
      printf("enter the number");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    printf("palindron value=%d",sum);
    if(i==sum)
    {
        printf("\npalindron value");
    }
    else
    {
        printf("\nnot palindron value");
    }
    
    return 0 ;
}
