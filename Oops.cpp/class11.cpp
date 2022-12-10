#include<iostream>
using namespace std;
class student
{
public:
string name;
int id;

void printname()
{
    cout<<name;
}
void  printid()
{
    cout<<id;
}
};


int main()
{

    student s1;
    s1.id=1;
    s1.name="prashant";
     cout<<s1.name<<endl;
     cout<<s1.id;
     
    return 0;
}

