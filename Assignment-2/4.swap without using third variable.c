#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a= %d , b= %d",a,b);
}
