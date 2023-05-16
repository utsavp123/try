#include<stdio.h>
#include<string.h>
struct emplyee
{
    int code;
    float salary;
    char name[10];

};

int main()
{
    struct emplyee a1,a2,a3;
    printf("enter the value of code=");
    scanf("%d",&a1.code);
    printf("enter the value of salary=");
    scanf("%f",&a1.salary);
    printf("enter the value of name=");
    scanf("%s",a1.name);

    printf("enter the value of code=");
    scanf("%d",&a2.code);
    printf("enter the value of salary=");
    scanf("%f",&a2.salary);
    printf("enter the value of name=");
    scanf("%s",a2.name);

    printf("enter the value of code=");
    scanf("%d",&a3.code);
    printf("enter the value of salary=");
    scanf("%f",&a3.salary);
    printf("enter the value of name=");
    scanf("%s",a3.name);
    return 0 ;
}