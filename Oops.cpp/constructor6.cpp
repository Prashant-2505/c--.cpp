#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int marks;
    public:
     student (string n, int m)
     {
         
         name = n;
         cout<<name<<" ";
        set_marks(m);
        cout<<marks;
        
     }

     void set_marks(int m)
     {
         if (m<0)
         {
             cout<<" enter valid marks";
         }
         else
         marks = m;
     }

     int score()
     {
         return marks;
     }

};
int main()
{

    student s1("tom",90);
    
    


    return 0;
}