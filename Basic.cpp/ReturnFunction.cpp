#include<iostream>
using namespace std;


/*  int sum( int a, int b){
    int c=a+b;
    return c;                    // It return the value of c to int sum

    }

    int main()
    {
    int num1, num2;
    cout<<" Enter first number "<<endl;
    cin>>num1;
    cout<<" Enter second number "<<endl;
    cin>>num2;

    cout<<" The sum is "<<sum(num1,num2);    // It call the value of int sum above
    
 
    return 0;
}                    */



int sum( int a, int b);             // its a funton prototype if u want to return your function after
                                    // main function you have to use function protype and declare it before main

int main()
    {
    int num1, num2;
    cout<<" Enter first number "<<endl;
    cin>>num1;
    cout<<" Enter second number "<<endl;
    cin>>num2;

    cout<<" The sum is "<<sum(num1,num2);
    
 
    return 0;
}               
     int sum( int a, int b){
    int c=a+b;
    return c;

    }