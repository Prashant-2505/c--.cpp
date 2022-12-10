#include<iostream>
using namespace std;
class student{
public:
int id;
string name;

};

int main()
{

    student s1;
    s1.id = 201;
    s1.name = " Prashant Sharma ";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;

    return 0;
}