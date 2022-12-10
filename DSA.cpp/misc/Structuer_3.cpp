#include <iostream>
using namespace std;
struct Student
{
    int roll_no{0};
    string name;
    string address;
    string branch;
};
int main()
{
    Student s1;

    cout << " What is your name " << flush;
    cin>>s1.name;

    cout<< " What is your adress "<<flush;
    cin>>s1.address;

   cout << " What is your branch " << flush;
    cin>>s1.branch;

    cout << " What is your roll no " << flush;
    cin >> s1.roll_no;

    cout << " your roll no is " << s1.roll_no << endl;
    cout << " your name is " << s1.name << endl;
    cout << " your branch is " << s1.branch << endl;
    cout<<  " your address is " << s1.address << endl;
    return 0;
}