#include<stdio.h>
int fun(int p,int q)
{
    if(q==0)
    return 1;
    else 
    return p*fun (p,q-1);
}
// fun2 does the wornk in less steps
int fun2(int p , int q)
{
     if (q==0)
     {return 1;}
     else if (q%2==0)
     {
        return fun2(p*p,q/2);
     }
     else
     return p * fun(p*p,(q-1)/2);
     
}
void main ()
{
    int a,b;
    b = fun(10,4);
    a= fun2(2,4);
    printf("%d",a);
}
