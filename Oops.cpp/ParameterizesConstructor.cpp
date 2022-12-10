#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    string name;
    long int sallary;
    void insert(int i, string n, long int s)
    {
        id = i;
        name = n;
        sallary = s;
    }

    void display()
    {
        cout << " your id is " << id << endl;
        cout << " your name is " << name << endl;
        cout << " and your sallary is " << sallary << endl;
    }
};
int main()
{
    employee e1;
    employee e2;
    employee e3;

    e1.insert(101, "prashant", 4500000);
    e2.insert(102, "Tom", 5400000);
    e3.insert(103, "jack", 9088888);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}