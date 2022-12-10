// removing mid element in stack


#include <bits/stdc++.h>
using namespace std;

void remove(stack<int> &s, int mid, int count)
{
    if (count == mid)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();
    remove(s, mid, count + 1);
    s.push(num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << " before removing mid" << endl;
    // while (!s.empty())
    // {
    //     cout << s.top()<<endl;
    //     s.pop();
    // }
    int mid = s.size() / 2;

    remove(s, mid, 0);

    cout << " after removing mid" << endl;
    while (!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();
    }
    return 0;
}