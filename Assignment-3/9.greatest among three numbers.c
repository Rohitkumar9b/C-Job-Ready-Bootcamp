#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("all are same");
    else if(a>b)
    {
        if(a>c)
            printf("Geatest is %d",a);
        else
            printf("Geatest is %d",c);
    }
    else
    {
        if(b>c)
            printf("Geatest is %d",b);
        else
            printf("Geatest is %d",c);
    }
    return 0;
}

