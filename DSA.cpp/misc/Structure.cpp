#include <iostream>
using namespace std;

struct Person                        // Create the structure name person
{
    char name[50];                  // Data of the structure
    int age;
    float salary;
};

int main()
{
    Person p1;                        // Intialize the structure
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 40);                 // Get is use to take the input of the character with the size limit
    cout << "Enter age: ";
    cin >> p1.age;                        // Access the structure data
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}