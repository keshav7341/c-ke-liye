#include<stdio.h>
int fun(int n)
{
    if(n>100)
    return n-10;
    else
    return  fun(fun(n+11));
}
void main()
{
    int a=95,b;
    b = fun(a);
    
    printf("%d",b);
}