#include<iostream>
using namespace std;

int main()
{

    // Diffrent way to use array
    int mark [ ] = { 23, 78, 89, 65, 736, 342};  // In this way we dont need to give array size
                                                 // compiler self understand this
  
  
    int marks2 [3];                              // In this way you have to give a size to array
    marks2[0] = 98;
    marks2[1] = 65;
    marks2[2] = 87;
    marks2[3] = 45;



    cout<<" These are marks2 "<<marks2[0]<<endl;
    cout<<" These are marks2 "<<marks2[1]<<endl;
    cout<<" These are marks2 "<<marks2[2]<<endl;
    cout<<" These are marks2 "<<marks2[3]<<endl;


    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
    cout<<mark[4]<<endl;
    cout<<mark[5]<<endl;

    return 0;
}


