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
void delete(struct array *arr, int index)
{ int x,i;
    if(index<=arr->length)
    {x=arr->a[index];
        for(i=index;i<arr->length-1;i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
    }
}


int main ()
{
    struct array arr={{1,2,3,4,5},10,5};
   
    display(arr);
    delete(&arr,1);
    printf("after delete\n");
    display(arr);
    
    return 0;
}