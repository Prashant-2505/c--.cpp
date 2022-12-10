// reversing string using recursion


#include <bits/stdc++.h>
using namespace std;

void rev(string &a, int s, int e)
{
    if (s > e)
    {
        return;
    }

    swap(a[s], a[e]);
    rev(a, s + 1, e - 1);
}

int main()
{
    string a;
    cout << " enter the string " << endl;
    cin >> a;
    cout << " string before reverse" << endl;
    cout << a << endl;
    int s = 0;
    int e = a.length() - 1;

    cout << " string after reverse" << endl;
    rev(a, s, e);
    cout << a;
    return 0;
}