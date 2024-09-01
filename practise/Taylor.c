// #include <stdio.h>
// int e(float x ,float y)
// {
//     static float f=1,p=1;
//     float r;
//     if(y==0)
//     return 1;
//     else
//     {
//         r= e(x,y-1);
//         p=p*x;
//         f=f*y;
//         return r+p/f;
//     }
// }
// void main ()
// {
//     float a;
//    a= e(1,10);
//    printf("%f",a);
// }


#include <stdio.h> 
double e(int x, int n)
{
 static double p=1,f=1;
 double r;
 
 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}
int main()
{
 printf("%lf \n",e(1,15));
 return 0;
}