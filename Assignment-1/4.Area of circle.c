#include<stdio.h>
int main()
{
    int R;
    double A;
    printf("Enter a Radius of a circle");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("Area of circle is %lf having the radius %d",A,R);
    return 0;
}

