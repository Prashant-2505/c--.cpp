#include<iostream>
using namespace std;
class Hero{
private :
int health;
string level;
public:
Hero(int h, string l){
 
}
Hero( const Hero &Tom){
    health = Tom.health;
    level = Tom.level;
}
void display()
    {
        cout<<"Health  is "<<health<<"  "<<"and level is "<<level;
    }

};
int main()
{

    Hero Tom (10,"max");
    Hero Sam = Tom;
    cout<<"Tom is normal constructor "<<endl;
    Tom.display();
    cout<<endl;
    cout<<" Sam is copy constructor of tom "<<endl;
    Sam.display();

    return 0;
}