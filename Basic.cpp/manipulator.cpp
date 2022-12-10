# include<iostream>
# include<iomanip>  // Its used for using manipulator function

using namespace std;
int main ()
{

int a {5};        // Its a best practise to  intialize varible (C++ list intialization)
int b = 99;       // Normal intialization
int c {78};
int d {9809};

cout<<" The value of a is "<<setw(4)<<a<<endl;   // Setw is used for set the width of 4
cout<<" The value of b is "<<setw(4)<<b<<endl;
cout<<" The value of c is "<<setw(4)<<c<<endl;
cout<<" The value of d is "<<setw(4)<<d<<endl;


// Without setw manipulator
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;



}