/*
Lexicographically smallest string


Medium


Given a string S consisting of only lowercase characters. Find the lexicographically smallest string after removing exactly k characters 
from the string. But you have to correct the value of k, i.e., if the length of the string is a power of 2, reduce k by half, 
else multiply k by 2. You can remove any k character.
NOTE: If it is not possible to remove k (the value of k after correction) characters or if the resulting string is empty return -1.

Example 1:

Input: S = "fooland", k = 2
Output: "and" 
Explanation: As the size of the string = 7
which is not a power of 2, hence k = 4.
After removing 4 characters from the given 
string, the lexicographically smallest
string is "and".
Example 2:

Input: S = "code", k = 4
Output: "cd"
Explanation: As the length of the string = 4, 
which is 2 to the power 2, hence k = 2.
Hence, lexicographically smallest string after 
removal of 2 characters is "cd".

*/



#include <bits/stdc++.h>
using namespace std;

void ans1(string s, int k)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        while (k && !st.empty() && st.top() > s[i])
        {
            k--;
            st.pop();
        }
        st.push(s[i]);
    }

    while (k > 0 && !st.empty())
    {
        st.pop();
        k--;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans;
}

void ans2(string S, int k)
{

    string ans;
    for (int i = 0; i < S.size(); i++)
    {
        while (ans != "" && ans.back() > S[i] && k > 0)
        {
            ans.pop_back();
            k--;
        }
        ans.push_back(S[i]);
    }
    while (ans != "" && k > 0)
    {
        ans.pop_back();
        k--;
    }
    if (ans == "")
        cout<< "-1";

    cout << ans;
}

int main()
{

    stack<char> st;

    string s;

    cout << "Enter the string" << endl;
    cin >> s;

    int n = s.length();

    int k;
    cout << "enter the k " << endl;
    cin >> k;

    if ((n & (n - 1)) == 0)
        k = k / 2;
    else
        k = k * 2;

    cout << " string is " << s << endl;

    ans2(s, k);

    return 0;
}