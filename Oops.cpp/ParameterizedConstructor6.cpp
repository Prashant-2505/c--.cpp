#include<iostream>
using namespace std;
class Hero{
private:
string health;
int level;
public:
Hero(string h, int l){
    health = h;
    level = l;
}
string gethealth(){
    return health;
}
int getlevel(){
    return level;
}
};
int main()
{

   Hero tom("MAX",99);
   cout<<" The health of the tom is "<<tom.gethealth();
   cout<<endl;
   cout<<" The level of the tom is "<<tom.getlevel();

    return 0;
}