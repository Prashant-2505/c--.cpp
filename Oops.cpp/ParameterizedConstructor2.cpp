#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;
    Hero(int health)
    {
        cout<<" This -> "<<this<<endl;
        this -> health = health;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char l)
    {
        level = l;
    }
};
int main()
{
    Hero Tom(20);
    cout << " Address of the ramesh " << &Tom << endl;
    Tom.setlevel(50);
    Tom.gethealth();
    cout<<" The gealth of the tom is "<<Tom.getlevel();
    return 0;
}
