// Parameter pass by address

// in this parameter the value was modified in the function does affect the the main function



#include<iostream>
using namespace std;

void swap (int *a, int *b)
{
     cout<<a<<" "<<b<<endl;
      int temp;
      temp = *a;
      *a = *b;
      *b = temp;
      cout<<a<<" "<<b<<endl;
    
}
int main()
{
    int x=10,y=30;
   swap(&x,&y);
   cout<<x<<" "<<y;

    return 0;
} 