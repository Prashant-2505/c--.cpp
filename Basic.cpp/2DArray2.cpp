  #include <iostream>
using namespace std;

int main()
{

    int A[3][3];

    for (auto &X : A)   // auto is used understand the type of variable
    {                    //& x --> is mean that the value of A is reffered to x or store at x
        for (auto& Y : X)     //& Y --> is mean that the value of x is reffered to x or store at Y
        {
           cin>> Y ;
        }
      cout<<endl;
    }
    for (auto &X : A)
    { 
        for (auto &Y : X)
        {
            cout << Y << " ";
        }
        cout << endl;
    }

    return 0;
}