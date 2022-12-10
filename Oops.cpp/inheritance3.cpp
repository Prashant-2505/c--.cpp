// Multilevel inhreritance 

#include<iostream>
using namespace std;
class clg
{
    public:
    string branch = " CSE ";
};
class student : public clg
{
    public:
    string name = "Tom";
};
class marks : public student
{
public :
int mark = 99;
void display ()
{
    cout<<branch<<" "<<name<<" "<<mark;
}
};

int main()
{
    marks s;
    s.display();
    return 0;
}