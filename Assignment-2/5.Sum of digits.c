#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of digit is %d",sum);
    getch();
}
