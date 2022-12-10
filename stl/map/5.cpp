/*
Given N strings, print unique string in lexiography order with
their frequencies
input string = {abc}{def}{abc}{ghi}{lkm}
output string = {abc}  2
                {def}  1
                {ghi}  1
  string should be unique not repeated strings
  */              

#include <bits/stdc++.h>
using namespace std;

void maps()
{
    unordered_map<string, int> A;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        A[s]; // means value is save in map
        A[s] = A[s] + 1;
    }
    cout<<" Enter the no of query ";
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << A[s] << endl;
    }
}
int main()
{
    maps();
    return 0;
}