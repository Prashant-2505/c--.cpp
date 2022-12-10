#include<iostream>
using namespace std;
int main ()
{

int age;

//  using \t to add some space 
cout<<"Enter your age > "<<flush;
cin>>age;

if ((age >= 18)  &&  (age < 100))
{
    cout<<"You can drive. ";
}
else if (age > 100)
{
    cout<<" Ivalid age: ";
}

else  
{
    cout<<" Sorry you cant drive : ";
}



return 0;

}