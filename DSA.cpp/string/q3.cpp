/*  CODE STUDIO

PROBLEM STATEMENT
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
Input Format:
The first line contains a single integer ‘T’ representing the number of test cases. 

The first line of each test case will contain a single string 'STR' consisting of one or more words. 
Output Format:
For each test case, return the modified string after replacing all the spaces between words with “@40”.

Print the output of each test case in a separate line.
Note:
You don’t need to print anything, It has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 50
0 <= |STR| <= 100

Where ‘|STR|’ is the length of a particular string including spaces.

Time limit: 1 sec
*/

#include<bits/stdc++.h>
using namespace std ;
int main()
{
string s ;
getline(cin,s);
string temp = "";
for(int i=0;i<s.length();i++)
{
    if (s[i] == ' ')
    {
         temp.push_back('@');
         temp.push_back('4');
         temp.push_back('0');
    }
    else{
        temp.push_back(s[i]);
    }
}
cout<<temp;

return 0;
}