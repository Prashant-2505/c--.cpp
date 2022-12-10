#include<iostream>
using namespace std;
class Employe{
public:
int id;
string name;
long int sallary;

void insert(int i, string n, long int s){     //  Assign the value of class public datatype
id = i;
name = n;
sallary = s;

}

void display()
{
cout<<" Your id is "<<id<<" "<<" Your name is "<<name<<" "<<" Your sallary is "<<sallary<<endl;

}
};
int main(void)
{

    Employe e1;      // Creating an object of employee
    Employe e2;      // Creating an object of employee
    Employe e3;

    e1.insert(101, "Prashant",6700000);
    e2.insert(102, " Deepu",7800000);
    e3.insert(103, "amit",12000);

    e1.display();
    e2.display();
    e3.display();
    return 0;
}