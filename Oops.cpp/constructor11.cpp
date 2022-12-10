// deep


#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int *id;
    employee(string name, int i)
    {
        id = new int ;
        cout << name << " " << id << endl;
    }

    employee(employee &e)
    {
        id = e.id;
        name = e.name;
        cout << name << " " << id << endl;
    }
};
int main()
{
    employee e1("chandu", 34);
    employee e2 = e1;

    return 0;
}