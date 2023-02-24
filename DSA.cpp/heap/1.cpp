// max heap insertion

#include<bits/stdc++.h>
using namespace std ;   

class Heap
{
    public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0]=-1;
        size =0;
    }

    void insert(int val)
    {
        size += 1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    {
        if(size ==0)
        {
            return;
        }
        arr[1] = arr[size];
        size--;

        int i=1;
        while(i<size)
        {
            int leftchild = 2*i;
            int rightchild = 2*i+1;

           if(leftchild<=size && rightchild<=size)
           {
            if(arr[leftchild]>arr[rightchild] && arr[leftchild]>arr[i])
            {
                swap(arr[leftchild],arr[i]);
                i = leftchild;
            }
           else if(arr[rightchild]>arr[leftchild] && arr[rightchild]>arr[i])
            {
                swap(arr[rightchild],arr[i]);
                i = rightchild;
            }
           }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{

Heap h;
h.insert(50);
h.insert(20);
h.insert(45);
h.insert(40);
h.insert(30);

h.print();
h.deletion();
cout<<endl;
h.print();
return 0;
}