

#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str, int s, int e)
{
    if (s > e)
    {
        return true;
    }

    if (str[s] != str[e])
    {
        return false;
    }

    else
    {
        return palindrome(str, s + 1, e - 1);
    }
}

int main()
{
    string str;
    
    cout << "Enter the string" << endl;
    cin >> str;

    int s = 0;
    int e = str.length() - 1;

    
    if (palindrome(str, s, e))
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";
    return 0;
}