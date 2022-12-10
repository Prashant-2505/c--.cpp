// reference

#include<bits/stdc++.h>
using namespace std ;

// value will be change because at this time we pass the reference of the variable
// refernce --> it is a another name of the given variable like petname
void pass_by_reference (int &x)
{
    x++;
}


// value will not be change because we pass value
// in a function and we know when call/pass by value is done
// then copy of that variable will created and modified the copy 
// value not the original variable value 
void pass_by_value (int x)    
{
    x ++;
}

int main()
{
int i =9;
int &j = i;
j++;
cout<<i<<endl;


int a = 5;
cout<<" before update a "<<a<<endl;
pass_by_value (a);
cout<<" after update a by pass by value "<<a<<endl;    
pass_by_reference(a);
cout<<" after update a by pass by reference "<<a<<endl;

return 0;
}