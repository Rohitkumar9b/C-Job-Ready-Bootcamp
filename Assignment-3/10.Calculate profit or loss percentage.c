#include<stdio.h>
int main()
{
    int cp,sp,p=0,l;
    printf("Enter a number ");
    scanf("%d%d",&cp,&sp);
    if(cp<sp)
        p=sp-cp;
    else
        l=cp-sp;
    if(p==0)
        printf("loss is %lf",(l*100.0)/sp);
    else
        printf("profit is %lf",(p*100.0)/sp);
    return 0;
}

