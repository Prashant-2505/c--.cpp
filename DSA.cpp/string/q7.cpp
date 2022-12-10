/*

Geek and Number String
Medium

Geek has a string Sof size Nconsisting of characters from '0'to '9'. He wants to minimise the length of the string.
 In each minimising operation, geek can remove any two consecutive characters if they are of the form 
 {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"}.
Find the minimum possible length of the string after applying minimising operations. 
 

Example 1:

Input: 
N = 5 
S = "12213"
Output: 1
Explanation: Geek can get the string of 
length 1 in two minimising operation,
In 1st operation Geek will remove "12" 
from "12213" then Geek left with "213"
In 2nd operation Geek will remove "21" 
from "213" then Geek left with "3"
 

Example 2:

Input: 
N = 4
S = "1350"
Output: 4
Explanation: Can't remove any character.
 

Your Task:  
You don't need to read input or print anything. Complete the functionminLength() which takes N and S as input parameters and returns the the minimum possible length of the string.


Expected Time Complexity: O(N)
Expected Auxiliary Space:O(N)
 

Constraints:
1 ≤ N ≤ 105
*/


#include<bits/stdc++.h>
using namespace std ;
   
int main()
{
int n;
cout<<" enter the size of string"<<endl;
cin>>n;
string s ;
cout<<" enter the string"<<endl;
cin>>s;




stack<char> st;
for(int i=0;i<n;i++)
{
    if(st.empty())
    {
        st.push(s[i]);
        continue;
    }

    string temp = "";
    char current = s[i];
    temp.push_back(st.top());
    temp.push_back(current);

    if (temp =="12" || temp=="21"|| temp=="34"|| temp=="43"|| temp=="56"|| temp=="65"|| temp=="78"|| temp=="87"|| temp=="09"|| temp=="90")
    {
        st.pop();
    }

    else
    {
        st.push(current);
    }
}

int ans = st.size();
cout<<ans;
return 0;
}