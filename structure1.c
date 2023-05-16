 #include<stdio.h>
struct demo
{

int a;



}d[100];



 void main()
 {
    int i,n;
    printf("enter the number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter d[%d].a=",i);
        scanf("%d",&d[i].a);
    }
 }