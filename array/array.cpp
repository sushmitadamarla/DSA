#include<iostream>

using namespace std;

class Array
{
public:

    int *a;
    int size;
    int length;

    Array(int size)
    {
        this->size=size;
        a = new int [size];
    }

  /*  void create()
    {
        cout<<"Enter no. of elements in array"<<endl;
        cin>>length;

        cout<<"Enter the elements"<<endl;

        for(int i=0;i<length;i++)
        {
            cin>>a[i];
        }
    }*/

    void display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<a[i]<<" "<<endl;
        }
    }

   /* void insert(int x)
    {
        if(length<size)
        {
            a[length++]=x;
        }
    }*/

   /* int del(int index)
    {
        int x=0;
        if(index>=0 && index<length)
        {
            x = a[index];
            for(int i=index ;i<length-1; i++)
            {
                a[i]=a[i+1];
            }
            length--;
        }
        return x;
    }*/

    int get(int index)
    {
        if(index>=0 && index<length)
        {
            return a[index];
        }
        return -1;
    }

    void set(int index, int x)
    {
        if(index>=0 && index<length)
        {
            a[index]=x;
        }
    }

    int max()
    {
        int max= a[0];
        for(int i=0;i<length;i++)
        {
           if(a[i]>a[max])
           {
              a[max] = a[i];
           }
        }

        return a[max];
    }

    int min()
    {
        int min= a[0];
        for(int i=0;i<length;i++)
        {
           if(a[i]<a[min])
           {
              a[min] = a[i];
           }
        }

        return a[min];
    }

    int sum()
    {
        int sum=0;
        for(int i=0;i<length;i++)
        {
           sum= sum+a[i];
        }
        return sum;
    }
};
int main()
{
    Array arr(10);
   // arr.create();
   arr.length=8;
   arr.a[0]=2;
   arr.a[1]=4;
   arr.a[2]=6;
   arr.a[3]=8;
   arr.a[4]=10;
   //arr.insert(12);
  // int deletedvalue= arr.del(4);
 //  cout<<"Deleted value:"<<deletedvalue;

    arr.get(3);
    arr.set(4,12);
    arr.max();
    arr.min();
    arr.sum();
    arr.display();

    return 0;
}