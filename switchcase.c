#include<stdio.h>
void main()
{
     int i,n,sum=0,a[100],choice,mul=1;
     printf("1>sum,2>multi");
     scanf("%d", &choice);

     switch(choice)
     {
          case 1:
          {
               printf("enthe the array");
               scanf("%d",&n);

               for(i=0;i<n;i++)
               {
                    printf("a[%d]=",i);
                    scanf("%d",&a[i]);
               }
               for(i=0;i<n;i++)
               {
                    sum=sum+a[i];
               }
               printf("sum of array series=%d",sum);
          }
          break;
          case 2:
          {
               printf("enthe the array");
               scanf("%d",&n);

               for(i=0;i<n;i++)
               {
                    printf("a[%d]=",i);
                    scanf("%d",&a[i]);

               }
               for(i=0;i<n;i++)
               {
                    mul=mul*a[i];
               }
               printf("mul of array series=%d",mul);
          }
          break;
     }
     return ;
}