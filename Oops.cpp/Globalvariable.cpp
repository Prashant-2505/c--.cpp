#include<iostream>
using namespace std;
int val = 100;                       // Declare global variable outside any function
int main()
{

  int val2 = 200;
  cout<<" variable "<<val2;           // Normal variable access
  cout<<endl;
  cout<<" Global variable "<<::val;  // Global variable access

    return 0;
}