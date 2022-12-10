// using this keywords\

#include<iostream>
using namespace std;
class hero
{
    public :
    int health;
    int *p;

    hero(int h,int p)
    {
        health = h;
        this->p = new int;
    }
    hero(hero & copy)
    {
        health = copy.health;
        this->p = copy.p;
    }
};
int main()
{

hero h1(10,30);
hero h2=h1;
cout<<h1.p<<endl;
cout<<h2.p<<endl;

    return 0;
}