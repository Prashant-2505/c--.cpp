#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int breadth;
public:

rectangle (int L, int b)
{
    set_length(L);
    set_breadth(b);
}

rectangle (rectangle & r)
{
    length=r.length;
    breadth=r.breadth;
}


int area ()
{
    return length*breadth;
}

void set_length(int L)
{    
    if(L>0)
    length = L;
    else
    length = 0;
}
void set_breadth(int b)
{  
    if (b>0)
    breadth = b;
    else
    breadth = 0;
}
int get_length()
{
    return length;
}
int get_breadth()
{
    return breadth;
} 
};
int main()
{

    rectangle r1(9,10);
    rectangle r2(9,8);
    cout<<r1.area()<<endl;
   cout<<r2.area();


    return 0;
} 