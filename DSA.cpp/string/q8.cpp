// find the no of count of string,s substring which is palindrome or not 
// code studio medium 

#include <bits/stdc++.h>
using namespace std;

bool palindrome(vector<char> ch)
{
    for (auto it : ch)
    {
        cout << it;
    }
    cout << endl;
    int s = 0;
    int e = ch.size() - 1;
    while (s < e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }

    return true;
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    int count = 0;
    vector<char> temp;
    int n = s.length() ;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
             
            for (int k = i; k <= j; k++)
            {
                temp.push_back(s[k]);
            }

            if (palindrome(temp))
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}