#include<stdio.h>
void fun1(int n)
{
    if(n>0)
    {
       // printf("%d \n",n);
        fun1(n-1);
 printf("%d \n",n);    
    }
};
int main(int argc, char const *argv[])
{
    int x=3;
    fun1(x);
   // printf("hello");
    return 0;
}
