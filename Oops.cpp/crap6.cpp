#include <iostream>
using namespace std;
const int size{5};
class student
{
    int roll_no;
    int marks[size];
    int total;

public:
    void get_data()
    {
        cout << " Enter your roll no " << endl;
        cin >> roll_no;

        for (int i = 0; i < size; i++)
        {
            cout << " Enter the marks of subject " << i + 1 << " ";
            cin >> marks[i];
        }
    }

    void display_total()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {

            total = total + marks[i];
        }
        cout << " Total marks is " << total;
    }
};

int main()
{
    student s1;
    s1.get_data();
    s1.display_total();

    return 0;
}