// print name n time

#include <iostream>
using namespace std;

void fun(int i,int n)
{
  while (i<n)
    {
        cout << "Prashant" << endl;
        i++;
    }
    fun(n,i);
}
int main()
{
  int i=0;
  int n;
  cin>>n;
    fun(i,n);

    return 0;
}