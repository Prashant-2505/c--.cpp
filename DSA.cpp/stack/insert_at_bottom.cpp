// removing mid element in stack


#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int k )
{
       if(!s.empty())
       {
        s.push(k);
        return;
       }

       int top = s.top();
       s.pop();
       insert(s,k);
       s.push(top);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

  int k = 6;

    insert(s, k);

    cout << " after removing mid" << endl;
    while (!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();
    }
    return 0;
}