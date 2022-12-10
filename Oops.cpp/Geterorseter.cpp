   // How to access the private class
   // Use getter and setter
   


#include<iostream>
using namespace std;
class Hero{

    private:
    int level;
    public:
    string health;

    int getlevel(){                  // Here we create the member function name getlevel for access the private class
        return level;                // And return the level to int 
    }
    string gethealth(){
        return health;
    }

    void setlevel(int l){           // Here we create a member fuction name setlevel to set the value of data member of private class
        level = l;                  // Seter is use to apply any specific condtion
    }
    void sethealth(string h){
        health = h;
    }
};

int main()
{

Hero Tom  ;
Tom.setlevel(99);                 // Here we given the value to level and access the member function 
Tom.sethealth("max");
cout<<" The level of tom is "<<Tom.getlevel()<<endl;    // Here we access thr private class
cout<<" The health of tom is "<<Tom.gethealth()<<endl;
    return 0;
}