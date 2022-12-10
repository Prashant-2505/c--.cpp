#include<iostream>
using namespace std;
class Hero{
public:
int  level;
string health;

};
int main()
{

Hero Tom;
cout<<" What is Tom health "<<flush;
cin>>Tom.health;
cout<<" Tom level is "<<flush;
cin>>Tom.level;
cout<<" Tom health is "<<Tom.health<<endl;
cout<<" Tom level is "<<Tom.level<<endl;

    return 0;
}