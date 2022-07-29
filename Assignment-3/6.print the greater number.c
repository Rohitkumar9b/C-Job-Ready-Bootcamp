#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter two number ");
    scanf("%d%d",&n,&p);
    if(n==p)
    {
        printf("Both are same");
    }
    else if(n>p)
    printf("Greatest number is %d",n);
    else
        printf("Greatest number is %d",p);
    return 0;
}

