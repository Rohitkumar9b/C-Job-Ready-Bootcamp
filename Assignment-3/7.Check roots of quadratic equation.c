#include<stdio.h>
int main()
{
    int a,b,c;
    double D;
    printf("Enter coeficient a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D==0)
        printf("Real and Equal roots");
    else if(D>0)
        printf("Real and Distinct roots");
    else
        printf("Imaginary roots");
    return 0;
}

