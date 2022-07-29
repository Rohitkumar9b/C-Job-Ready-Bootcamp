#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        i++;
    }
    if(i==3)
    printf("Three digit number");
    else
        printf("NOt three digit number");
    return 0;
}

