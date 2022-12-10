#include<iostream>
using namespace std;
class student {                        // First create a class name student
public:                                // Then declare it public
int id;                                // Define data type
string name;
void insert(int i,string n){           // Add void function names insert for insertion
id = i;
name = n;
}
void display(){                       // Add another void function name display for output
cout<<" Your id is "<<id<<" "<<" Your name is "<<name<<endl;

}

};

int main(void)                        // Then call the void function
{
student s1;                           // Now insert the value of student to s1
student s2;                           // And insert the value od student to s2
s1.insert(100," Prashant");           // Call the insert function of void
s2.insert(101," Deepu");
s1.display();                         // Call the display function of void
s2.display();
    

    return 0;
}