#include<stdio.h>
int i;
struct array
{
    int a[10];
    int size;
    int length;

};

void display(struct array arr)
{

    for(i=0;i<arr.length;i++)
    {
       printf("%d\n",arr.a[i]);
    }
}
int search(struct array arr,int key)
{
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]==key)
        return i;
    }
    return -1;
}
int main ()
{
    struct array arr={{1,2,3,4,5},10,5};
   
    display(arr);
   
    printf("%d is loc",search(arr,5));
   
    
    return 0;
}