/*
7. Permutation in String

Medium


Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.



Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false


Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.
*/

#include <bits/stdc++.h>
using namespace std;

bool checkequal(int A[26], int B[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (A[i] != B[i])
        {
            return 0;
        }
    }
    return 1;
}

string premutation(string s1, string s2)
{
    // store count of s1
    int count1[26]{0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // store of count s2
    int count2[26]{0};
    int i = 0;
    int windowsize = s1.length();
    while (i < windowsize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    // check for first window
    if (checkequal(count1, count2))
        return " yes ";
    // check of rest of the window
    while (i < s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;
        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';
        count2[index]--;

        i++;
        if (checkequal(count1, count2))
            return " yes ";
    }
    return "no";
}

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    cout << premutation(s1, s2);
    return 0;
}