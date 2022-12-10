/* Leetcode
125. Valid Palindrome
Easy

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
 it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

#include <bits/stdc++.h>
using namespace std;
class palindrome
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    char to_lower(char ch)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    string check(string name)
    {
        int a = 0;
        int length = name.length() - 1;
        while (a <= length)
        {
            if (name[a] != name[length])
            {
                return " NO ";
            }
            else
            {
                a++;
                length--;
            }
        }
        return " YES ";
    }

public:
    string is_palindrome(string name)
    {
        string temp;
        for (int i = 0; i < name.length(); i++)
        {
            if (valid(name[i]))
            {
                temp.push_back(name[i]);
            }
    
            
        }

        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = to_lower(temp[j]);
        }

        return check(temp);
    }
};
int main()
{
    string name;
    cin >> name;
    palindrome P;
    cout << P.is_palindrome(name);
    return 0;
}