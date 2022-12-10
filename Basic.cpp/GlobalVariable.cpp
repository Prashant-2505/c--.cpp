#include <iostream>
using namespace std;
int g = 5;

void add()
{
    int a = 10;
    a++;
    g++;
    cout << a<<" "<<g<<endl;
}
int main()
{
    cout << g << endl;
    add();
    cout << g << endl;

    return 0;
}