#include<stdio.h>
void main()
{
    int i;
    i=1;
    while(true)
    {
        printf("%d",i);
        i++;
        if(i==10)
        {
            break;
        }
    }
}