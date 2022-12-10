#include<bits/stdc++.h>
using namespace std;

void deque_learn()
{
    deque<int> A;
   A. push_back(2);
   A.push_front(1);

   deque<int> :: iterator it = A.begin();
   for(it; it != A.end(); ++it)
   {
    cout<<*(it);
   }

}
int main()
{

   deque_learn(); 

    return 0;
}