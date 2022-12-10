#include<iostream>
using namespace std;

int main()
{

    int *p = new int[5];           // ther we store the data in heap memory by using pointer
    p[0]=11;                       // we can assign the value as we assign in  normal array if we want
    p[1]=22;
    cout<<p[1]<<endl;
   

    delete []p;                     // we have to delete that pointer we create in heap memory because the data insdide the heap is 
                                    // not  automatically dlete it remain in the heap as long as you program run 
    p = nullptr;                    // after the delete the pointer the data we have to null tha ya delete the address to brcoz if we not
                                    // delete the addree it will create the memory leak problem 
    cout<<p[0];

    return 0;
}