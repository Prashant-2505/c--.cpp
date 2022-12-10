// C++ program to implement the
// deep copy
#include <iostream>
using namespace std;

class hero
{
public:
    int power;
     int *xp;
    int level;

public:
    hero()
    {
        xp = new int;
    }
   hero(hero &sample)
    {
        power = sample.power;
        level = sample.level;
        xp = new int;
        *xp = *sample.xp;
    }
    void set_data(int p, int l, int x)
    {
        power = p;
         *xp = x;
        level = l;
    }

    void show_data()
    {
        cout << power << " " << level <<" "<<*xp <<endl;
    }

 
};

int main()
{

    hero first;

    first.set_data(120, 10, 990);

    first.show_data();

    hero second = first;

    second.show_data();
    cout<<first.xp<<endl;
    cout<<second.xp<<endl;

    return 0;
}
