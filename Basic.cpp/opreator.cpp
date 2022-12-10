#include<iostream>
using namespace std;
int main()
{
int a = 9, b= 7;
 // Airthmetic operators
  cout<<" These are airthmetic operator"<<endl;
 cout<<" The value of a + b is "<<a+b<<endl;
 cout<<" the value of a - b is "<<a-b<<endl;
 cout<<" The value of a / b is "<<a/b<<endl;
 cout<<" The value of a * b is "<<a*b<<endl;
 cout<<" the value of a++ is "<<a++<<endl;
 cout<<" The value of ++a is "<<++a<<endl;
 cout<<" The value of --a is "<<--a<<endl;
 cout<<endl;
 cout<<endl;

 // Assigmnt operator --> used to assign the value to variables
 //  int a = 5, b = 7;

 // Comparison oprator
cout<<" THese are comparison operator "<<endl;
cout<<" The value of of a==b is "<<(a==b)<<endl;
cout<<" THe value of a != b is " <<(a!=b)<<endl;
cout<<" The value of a >= b is "<<(a>=b)<<endl;
cout<<" THe value of a <= b is "<<(a<=b)<<endl;
cout<<" The value of a < b is "<<(a<b)<<endl;
cout<<" The value of a > b is "<<(a>b)<<endl;

  // Logical operator

// && is a  and logical operator it will work if the given both condtion are true
cout<<" THe value of the and logical operator of (a==b) && (a>b) is "<<((a==b) && (a<b))<<endl;

// || is a or operator and it will eithier this or this
cout<< " the value of or logical operator of (a==b) || (a>b) is "<<((a==b) || (a>b))<<endl;

// ! is a not logical operator it will revert the original sitution
cout<< " The value of not operator of !(a==b) is "<<!(a==b)<<endl;



 
 return 0;



}