#include<iostream>
using namespace std;

class student{
public:
string name;
int age;
bool gender;

void printinfo(){
  cout<<" Name = "<<name<<endl;
  cout<<" Age = "<<age<<endl;
  cout<<" Gender = "<<gender<<endl;

}



};

int main()
{

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
     cout<<" Enter the name ";
     cin>>arr[i].name;

     cout<<" Enter the age ";
     cin>>arr[i].age;

     cout<<" Enter the gender ";
     cin>>arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
      arr[i].printinfo();
    }
    
   


    return 0;
}