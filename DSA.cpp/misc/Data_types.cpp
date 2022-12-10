#include<iostream>
using namespace std;

int main()
{
  // Primitive data types
  // int, float, double, char

  int a{200};                           // best way of declrations
  long int b{700000000};
  long long int c{900000000000000};
  float d = 20.8;                       // normal way of declration
  double pi = 3.141141212121;
  char ch = 'p';
  bool Weather_is_raining = false;
  
cout<<a <<endl;  
cout<<b <<endl;
cout<<c <<endl;    
cout<<d <<endl;
cout<<pi <<endl;
cout<<ch <<endl;
cout<<Weather_is_raining<<endl;

cout<<endl;

cout<<"Size of data types "<<endl;

cout<<"int "<<sizeof(a)<<endl;
cout<<"long int "<<sizeof(b)<<endl;
cout<<"long long int "<<sizeof(c)<<endl;
cout<<"float "<<sizeof(d)<<endl;
cout<<"double "<<sizeof(pi)<<endl;
cout<<"bool "<<sizeof(Weather_is_raining)<<endl;

    return 0;
}