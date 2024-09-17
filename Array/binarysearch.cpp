#include <iostream>
using namespace std;

class array
{
    int a[20];
    int length;
    public:
    array();
    void show();
    int search(int key);

};
array :: array()
{
    int temp[]={1,2,3,4,5,6,7,8,9,10,11};
    length = 11;
    for (int i=0;i<length;i++)
    {
        a[i]=temp[i];
    }
}
void array :: show()
{
    for (int i=0;i<length;i++)
    {
        cout<<a[i]<<endl;
    }
}
int array :: search(int key)
{
    int l,h,mid;
    l=0;
    h=length-1;
   
    while (l<=h)
    {
         mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        
        else if (key<a[mid])
        {
            h=mid-1;
        }
        else
        l=mid+1;
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    array a1;
    //a1.show();
    int z =a1.search(5);
    cout<<z;
    return 0;
}
