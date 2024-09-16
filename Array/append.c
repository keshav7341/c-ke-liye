#include<stdio.h>

struct array
{
    int a[10];
    int size;
    int length;

};
void display(struct array arr)
{
int i;
    for(i=0;i<arr.length;i++)
    {
       printf("%d\n",arr.a[i]);
    }
}
void append(struct array *arr,int n)
{
    if (arr->length<arr->size)
    {
        arr->a[arr->length++]=n;
    }
    
}
void insert (struct array *arr,int index,int n)
{
    int i;
    for (i=arr->length;i>index;i--)
    {
        arr->a[i]=arr->a[i-1];
     
    
    }
     arr->a[index]=n;
    arr->length++;
}
int main ()
{
    struct array arr={{1,2,3,4,5},10,5};
    append(&arr,10);
   // display(arr);
    insert(&arr,2,33);
    display(arr);
    
    return 0;
}
