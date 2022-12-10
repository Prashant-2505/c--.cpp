// copy comstructor


#include <iostream>
using namespace std;
class hero
{
public:
    int health, level;
    string name;
    hero(string n, int h, int l)
    {
        name = n;
        health = h;
        level = l;
        cout << "enter the name of hero " << flush;
        cin >> n;
        cout << "enter the health " << flush;
        cin >> h;
        cout << "enter the level " << flush;
        cin >> l;
        cout << n << " " << h << " " << l << " " << endl;
        cout << endl;
    }
    hero(hero &h)
    {
        name = h.name; 
        health = h.health;
        level = h.level;
        cout << "enter the name of hero " << flush;
        cin >> h.name;
        cout << "enter the health " << flush;
        cin >> h.health;
        cout << "enter the level " << flush;
        cin >> h.level;
        cout << h.name << " " << h.health << " " << h.level << " " << endl;
        cout << endl;
    }
};
int main()
{
    int h, l;
    string n;

    hero h1(n, h, l);
    hero h2=h1;
    return 0;
}