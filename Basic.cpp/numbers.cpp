#include<iostream>
using namespace std;
int main()
{


cout<<5+9<<endl;    // For adttion
cout<<89-54<<endl;  // For substractio
cout<<99*9<<endl;   // for Multiplication
cout<<987/9<<endl;  // For division

//its output is 54 due to operator prcendence 
//google it for more information 
cout<<4 + 5 * 10<<endl;

// Use () to avoid opeator precendence
// The value inside () will execute first
cout<<(4+5) * 10<<endl;

 
 // Using ++ for increment value
 // Using -- for decrement value 
int no = 9;
no++;

cout<<no<<endl;


    return 0;
}