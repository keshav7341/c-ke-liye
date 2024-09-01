#include<stdio.h>
int fun(int n)
{
    if(n==0)
    return 1;
    else 
    return n*fun (n-1);
}
void main ()
{
    int a,b;
    b = fun(5);
    printf("%d",b);
}