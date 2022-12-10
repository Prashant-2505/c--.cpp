// Program to check no is divisible by 2 and 3 or both
// by using conditional statment
#include <iostream>
using namespace std;

int main()
{

    int n{0};
     cout<<" Enter the no "<<flush;
    cin>>n;
   
   if (n%2==0 && n%3==0)
   {
       cout<<n<<" is dib by 2 and 3 "<<endl;
   }
   else if(n%2==0)                                 // If we using if again then the all other conditional statement is 
   {                                               // also execute so we want to check this condtion is true or not then
       cout<<n<<" is div by 2"<<endl;              // want program go to else statement then use if else and other conditional satement 
   }                                               // is not executed and compiler dierctly jump to else statement
   else if(n%3==0)
   {
       cout<<n<<" is div by 3"<<endl;
   }
   else if (n%2==0 && n%3==0)
   {
       cout<<n<<" is divisible by both 2 and 3 "<<endl;
   }
   
   else
   {
       cout<<n<<" is not div"<<endl;
   }
    return 0;
}