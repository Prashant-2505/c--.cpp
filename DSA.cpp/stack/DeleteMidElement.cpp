#include <bits/stdc++.h>
using namespace std;

void deletemid(stack<int> st, int count, int size)
{
     if (count == size / 2)
     {
          st.pop();
          return;
     }

     int num = st.top();
     st.pop();

     deletemid(st, count + 1, size);
     st.push(num);
}

int main()
{
     stack<int> st;
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          int x;
          cin >> x;
          st.push(x);
     }

     int count = 0;
     int size = st.size();
     cout << size;
     deletemid(st, count, size);
     cout << size;
     return 0;
}