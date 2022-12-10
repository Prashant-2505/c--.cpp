

#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int k)
{
    if(s.empty())
       {
        s.push(k);
        return;
       }

       int top = s.top();
       s.pop();
       insertAtBottom(s,k);
       s.push(top);
}

void reverse(stack<int> &s )
{
       if(s.empty())
       {
        return;
       }
     int num = s.top();
     s.pop();
     reverse(s);
     insertAtBottom(s,num);
        
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

    reverse(s);

    cout << " after removing mid" << endl;
    while (!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();
    }
    return 0;
}