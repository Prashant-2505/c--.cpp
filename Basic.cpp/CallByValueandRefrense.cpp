#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
void swap(int a , int b){      // Its doesnt change ater swap
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference by uiing pointer
void swappointer(int* a , int* b){      // It will be chage after the swap because
int temp = *a;                          // we use the value of a and b by using its adress 
*a = *b;
*b = temp;
}
// Call by reference by using referense variable
void  swaprefrencevariable( int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 6, b = 4; 
cout<<" The sume of a and b is "<<sum(a,b)<<endl;
swap(a,b);
cout<<" The value of a is "<<a<<" The value of the b is "<<b<<endl;
 swappointer(&a , &b);   
cout<<" The value after swap of a is "<<a<<" and b is "<<b<<endl;
swaprefrencevariable(a  ,b);
cout<<" The value after the swap of a is "<<a<<" and b is "<<b;
    return 0;
}