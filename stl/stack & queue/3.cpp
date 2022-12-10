// balance pranthesisi hacker earth
// imp

#include <bits/stdc++.h>
using namespace std;
string solution(string s)
{

    unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
    stack<int> st;
    for (auto brackets : s)
    {
        if (symbols[brackets] < 0)
        {
            st.push(brackets);
        }
        else if (symbols[brackets] > 0)
        {
            if (st.empty())
            {
                return "no";
            }
            else
            {
                char top = st.top();
                st.pop();
                if (symbols[top] + symbols[brackets] != 0)
                {
                    return "NO";
                }
            }
        }
    }
    if (st.empty())
    {
        return "yes";
    }
    else
    {
        return "no";
    }
}

int main()
{
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        cout << solution(s) << endl;
    }

    return 0;
}