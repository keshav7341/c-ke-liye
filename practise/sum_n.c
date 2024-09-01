#include <stdio.h>
int sum(int n)
{ int i=1;
    if(n==0)
    {
        return 0;
    }
    else
    return n +sum(n-1) ;
                  
}

void main ()
{
    int a,b;
    b = sum(10);
    printf("%d",b);
}