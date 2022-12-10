#include <iostream>
using namespace std;
class hero
{
    int health;
    string name;

public:
    void set_data(int h, string n);
    void show_data();
    hero();
    hero(int h, string n);
    hero(hero &h);
};

int main()
{

    hero h1;
    h1.set_data(999, "MOnu");
    h1.show_data();

    hero h2(980," chintu");
    h2.show_data();

    hero h3;
    h3 = h2;
    h3.show_data();

        return 0;
}

void hero ::set_data(int h, string n)
{
    health = h;
    name = n;

    cout << " Enter the name of hero ";
    cin >> name;
    cout << " Enter the health of " << name << " ";
    cin >> health;
}

void hero ::show_data()
{
    cout << " Name of hero is " << name << endl;
    cout << " Health of hero is " << health << endl;
}

hero ::hero()
{
}

hero ::hero(int h, string n)
{
    health = h;
    name = n;
}

hero ::hero(hero &h)
{
    health = h.health;
    name = h.name;
}