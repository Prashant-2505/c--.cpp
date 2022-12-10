#include <iostream>
using namespace std;
class hero
{
private:
    int health;
    int power;

public:

hero ()
{
    
}
    int xp()
    {
        return health * power;
    }

    void set_health(int h)
    {
        health = h;
    }

    void set_power(int p)
    {
        power = p;
    }

    int get_health()
    {
        return health;
    }
    int get_power()
    {
        return power;
    }
};
int main()
{
hero tom;

cout<<tom.xp();
    return 0;
}