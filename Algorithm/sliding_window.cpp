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







/*

/*
GFG

IPL 2021 - Match Day 2
Medium
Due to the rise of covid-19 cases in India, this year BCCI decided to organize knock-out matches in IPL rather than a league.

Today is matchday 2 and it is between the most loved team Chennai Super Kings and the most underrated team - Punjab Kings.
 Stephen Fleming, the head coach of CSK, analyzing the batting stats of Punjab. He has stats of runs scored by all N players
 in the previous season and he wants to find the maximum score for each and every contiguous sub-list of size K to strategize
 for the game.

Example 1:

Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 
Explanation: 
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6
Example 2:

Input:
N = 10, K = 4
arr[] = 8 5 10 7 9 4 15 12 90 13
Output: 
10 10 10 15 15 90 90
Explanation: 
1st contiguous subarray = {8 5 10 7}, Max = 10
2nd contiguous subarray = {5 10 7 9}, Max = 10 
3rd contiguous subarray = {10 7 9 4}, Max = 10 
4th contiguous subarray = {7 9 4 15}, Max = 15
5th contiguous subarray = {9 4 15 12}, Max = 15 
6th contiguous subarray = {4 15 12 90}, Max = 90 
7th contiguous subarray = {15 12 90 13}, Max = 90 

Your Task:  
You don't need to read input or print anything. Complete the function max_of_subarrays() which takes the array, N, and K as 
input parameters and returns a list of integers denoting the maximum of every contiguous subarray of size K.

Constraints:
1 ≤ N ≤ 106
1 ≤ K ≤ N
0 ≤ arr[i] ≤ 106


/*



#include <bits/stdc++.h>
using namespace std;

int check_max(vector<int> v)
{
     sort(v.begin(), v.end());
     return v.back();
}

int main()
{
     int n;
     cout << " enter the size of vector" << endl;
     cin >> n;
     int *arr = new int[n];
     cout << " enter the element of the array" << endl;
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }

     int k;
     cout << " Enter the k to find max of k element " << endl;
     cin >> k;




     vector<int> window(k);
    
     int window_size = k;
   
   for(int i=0;i<=n-window.size();i++,window_size++)
   {
     window.clear();
     for(int j=i;j<window_size;j++)
     {
          window.push_back(arr[j]);
     }
     int max = check_max(window);
     cout<<max<<" ";
  
   }

     return 0;
}

*/
