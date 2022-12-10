#include <iostream>
using namespace std;
class student
{
private:
    string name;

public:
    int rollno;
    char grade;
    string getname()
    {
        return name;
    }
    int getrollno()
    {
        return rollno;
    }
    char getgrade()
    {
        return grade;
    }
    void setname(string n)
    {
        name = n;
    }
    void setrollno(int r)
    {
        rollno = r;
    }
    void setgrade(char g)
    {
        grade = g;
    }
};

int main()
{
// Static alloacton
student s1;
student s2;

// Dynamic allocaton
student *s3 = new student;
s3->setname("Tom");
s3->setrollno(3);
s3->setgrade('c');


s1.setname("Prashant");
s2.setname("Deepu");
s1.setrollno(1);
s2.setrollno(2);
s1.setgrade('A');
s2.setgrade('B');

// Static allocation output
cout<<s1.getrollno()<<" roll no named student is "<<s1.getname()<<" Having Grade "<<s1.getgrade()<<endl;
cout<<s2.getrollno()<<" roll no named student is "<<s2.getname()<<" Having Grade "<<s2.getgrade()<<endl;
// Dynamic allocation output
cout<<s3->getrollno()<<" roll no named student is "<<s3->getname()<<" Having Grade "<<s3->getgrade()<<endl;

    return 0;
}