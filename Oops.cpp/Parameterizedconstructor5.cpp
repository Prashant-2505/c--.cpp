#include<iostream>
using namespace std;
class Wall{

private:
    double length;
    double height;
public:
    Wall(double l, double h){
    length = l;
    height = h;
    }
    double calculateArea(){
        return length*height;
    }
    void setlength(int l){
    length = l;
    }
    void setheight(int h){
        height = h;
    }
};

int main()
{
    Wall w1(50,50);
    
    cout<<" The area of the wall "<<w1.calculateArea();

    return 0;
}