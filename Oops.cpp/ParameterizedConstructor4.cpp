#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    Hero(int h)
    {
        health = h;
    }
    int gethealth(){
        return health;
    }

};
int main()
{
    Hero tom(90);
    cout<<" The health of tom is "<<tom.gethealth();
    return 0;
}