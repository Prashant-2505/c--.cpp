#include<iostream>
using namespace std;

template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);

}
 
 int main()
 { 
     int result_1;
     float result_2; 

     result_1 = add<int>(2,8);
       cout<<result_1<<endl;;
     result_2 = add<double>(9.9, 9.9);
     cout<<result_2;
   

 }