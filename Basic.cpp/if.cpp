# include <iostream>
using namespace std;
int main ()
{
string password = "come";
string input;

// Here we using flush to take input on same line
cout<<" Enter the password:> "<<flush;
cin>>input;
 if (input == password)
 {
    cout<<" Access granted: ";
 }
 
if (input != password)
{
    cout<<" Access is denied: ";
}

return 0;

}
