#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 2, 3, 4, 5, 8, 9, 10, 11};
    float B[] = {2.9, 9.8, 8.9, 22, 99};
    char C[] = {'a', 'b', 'c', 12, 13, 14};

    cout<<" 1st way of using for in array"<<endl;
    for (int i = 0; i < 9; i++)
        cout << A[i] << endl;

    cout << endl;

     for (int i = 0; i < 9; ++i)
        cout << A[i] << endl;

        cout<<endl;

    cout<<"2nd way of usinfg for in array and its called as for each loop"<<endl;
    for (int x : A)
        cout << x << endl;

    cout << endl;

    for (float y : B)
        cout << y << endl;

    cout << endl;

    cout<<" Using auto that automatically understand the type of array"<<endl;
    for (auto y : B)
        cout << y << endl;

    cout << endl;

    for (auto D : C)
        cout << D << endl;

    cout << endl;

    for (char D : C)
        cout << D << endl;

    cout << endl;

cout<<" If we prnt only integer value then its print the ascii value of character"<<endl;
    for (int D : C)
        cout << D << endl;

    cout << endl;

    cout<<" it will only increase the the the value in the ouput screen but the original value doesn't modified because x we used its the copy of the of the array A"<<endl;
    for (auto x : A)
        cout << ++x << endl;

    cout << endl;

     cout<<" it will only increase the the the value in the ouput screen and the original value also br modified because we usex we used the refrence and modified the value"<<endl;
    
    for (auto &x : A)
        cout << ++x << endl;

    return 0;
}