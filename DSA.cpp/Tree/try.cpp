#include <bits/stdc++.h>
using namespace std;

int check(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 1)
        {
            if (s[i] == s[i + 1])
            {
                cout << "1" << endl;
            }
        }
    }
}

int main()
{

    string s;
    cin >> s;
    int window = 3;

    check(s);
    for (int i = 0; i < s.length(); i++)
    {
        for (int i = 0; i < window; i++)
        {
            reverse(s.begin(), s.end());
        }
        check(s)
    }
}