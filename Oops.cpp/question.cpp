/* . Def ne a class called student which models the following states and behaviours
of a student:
States
Name
 Roll
 Marks
 Grade
Behaviours
Read_data()
 Display_grade()
 Compute_grade()
Compute the grade as per the following rules:
Marks Grade
>=50 < 60 D
>=60 < 70 C
>=70 < 80 B
>=80 A

*/

#include <iostream>
using namespace std;
class student
{
private:
    string name;
    string grade;
    int rollno, marks;

public:
    void Read_data()
    {
        cout << " Enter your name " << flush;
        cin >> name;
        cout << " Enter your roll no " << flush;
        cin >> rollno;
        cout << " Enter your marks " << flush;
        cin >> marks;
    }

    void display_data()
    {
        cout << " Name :" << name << endl;
        cout << " Roll no :" << rollno << endl;
        compute_grade();
        cout << " Grade :" << grade << endl;

        cout << endl;
    }

    void compute_grade()
    {
        if (marks >= 80)
            grade = "A";
        else if (marks >= 70 && marks < 80)
            grade = 'B';
        else if (marks >= 60 && marks < 70)
            grade = 'C';
        else if (marks >= 50 && marks < 60)
            grade = 'D';
        else
            grade = 'F';
    }
};
int main()
{

    student s1, s2, s3;
    s1.Read_data();
    s2.Read_data();
    s3.Read_data();
    cout << endl;
    s1.display_data();
    s2.display_data();
    s3.display_data();
    return 0;
}