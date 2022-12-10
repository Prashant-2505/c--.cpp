/*#include<iostream>
using namespace std;
class Class{
    private:
    int id;
    string name;
    char grade;
    public:
    Class(int i, string n, char g){
   
    }
    void display()
    {
        cout<<" THe id of "<<name<<" is "<<id<<" and the grade is "<<grade;
    }
};
int main()
{

    

    return 0;
}
*/

#include <stdio.h>
void m(int p, int q)
{
int temp = p;
p = q;
q = temp;
}
int main()
{
int a = 6, b = 5;
m(a, b);
printf("%d %d\n", a, b);
return 0;
}