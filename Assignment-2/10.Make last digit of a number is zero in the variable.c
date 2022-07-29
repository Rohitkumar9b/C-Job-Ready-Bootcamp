#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("last digit is zero the number is %d",(a/10)*10);
    return 0;
}
