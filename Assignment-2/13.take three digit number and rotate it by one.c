#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number");
    scanf("%d",&a);
    b=a%10;
    a=b*100+a/10;
    printf("Number after a right shift is %d",a);
    return 0;
}
