

#include <bits/stdc++.h>
using namespace std;

void sortinsert(stack<int>&s, int num)
{
    if (s.empty() || s.top() < num)
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortinsert(s, num);
    s.push(n);
}

void sortstack(stack<int>&s)
{
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    sortstack(s);
    sortinsert(s, num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(20);
    s.push(12);
    s.push(19);
    s.push(15);

    sortstack(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}