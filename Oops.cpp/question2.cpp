/*Def ne a class called employee with the following specif cations:
States
name
 BP: basic pay, 
 DA: dearness allowance
 HRA: house rent allowance
 salary
Behaviours
computeSal(): computes the salary 
 readData (): accepts the data values 
 dispSal(): prints the data on the screen.
 The salary is computed by the following formula:
 Salary = BP + DA + HRA
 where DA and HRA are 65% and 20% of the BP, respectively.
Write a program that reads the name and BP of the employee and prints the salary
*/





#include <iostream>
using namespace std;
class employee
{
private:
    string name;
    long double BP, DA, HRA, Salary;

public:
    void compute_salary()
    {
        DA = 0.65 * BP;
        HRA = 0.2 * BP;
        Salary = DA + HRA + BP;
    }

    void read_data()
    {
        cout << " Enter the name : ";
        cin >> name;
        cout << " Enter the Basic pay : ";
        cin >> BP;
        compute_salary();
    }

    void Display_data()
    {
        cout << " Name : " << name << endl;
        cout << " Salary : " << Salary << endl;
    }
};
int main()
{
    employee e1;
    e1.read_data();
    cout << endl;
    e1.Display_data();
    return 0;
}