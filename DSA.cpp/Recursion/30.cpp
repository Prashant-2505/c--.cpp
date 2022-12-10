/*
17. Letter Combinations of a Phone Number
Medium


Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
 Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
 

*/

#include <bits/stdc++.h>
using namespace std;

vector<string> solve(string digits, string output, vector<string> &ans, string mapping[], int index)
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return ans;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, ans, mapping, index + 1);
        output.pop_back();
    }

    return ans;
}

int main()
{
    string digits;
    cout << "enter the digits" << endl;
    cin >> digits;
    int index = 0;
    string output;
    vector<string> ans;

    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> solution = solve(digits, output, ans, mapping, index);
    cout<<"Possible combination of digits are "<<endl;
    for(auto it : solution)
    {
        cout<<it<<endl;
    }



    return 0;
}