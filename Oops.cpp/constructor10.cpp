// deep copy

#include <iostream>
using namespace std;
class hero
{
public:
    int health;
    int *p;

    hero(int h)
    {
        health = h;
        p = new int;
       
        cout << "adress of h1 constructor power->" << p << endl;
        cout << "adress of h1 constructor health ->" << &h << endl;
    }

    hero(hero &h)
    {
        health = h.health;
        p =h.p;
        cout << "adress of h2 constructor power->" << p << endl;
        cout << "adress of h2 constructor health ->" << &h.health << endl;
    }
};
int main()
{

    hero h1(100);
    hero h2 = h1;
    cout << "adress if obj 1-> " << &h1 << endl;
    cout << "adress of obj 2->" << &h2 << endl;
    cout << new int << endl;
    
    return 0;
}