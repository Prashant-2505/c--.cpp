#include<bits/stdc++.h>
using namespace std;

void list_learn()
{
    list<int> A;
   A. push_back(2);
   A.push_front(1);

   list<int> :: iterator it = A.begin();
   for(it; it != A.end(); ++it)
   {
    cout<<*(it);
   }

}
int main()
{

   list_learn(); 

    return 0;
}