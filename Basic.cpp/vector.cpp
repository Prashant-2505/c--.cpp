#include <iostream>
using namespace std;
#include<vector>
int main()
{
    
    vector<int> v;
    vector<int> *dp = new vector<int> () ;
    cout<<"Hello World"<<endl;
    v.push_back(40);
    v.push_back(50);
    v.push_back(90);
   v.pop_back();
    cout<<v[2];
    return 0;
}