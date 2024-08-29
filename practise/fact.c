#include <stdio.h>
int fact(int n)
{
 if (n>0)
 {
    return fact(n-1)*n;
 }   
 return 0;
}
int main(int argc, char const *argv[])
{
    int i,f=1,a=5;
   // printf("%d",fact(a));
    for(i=a;i>1;i--)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}
