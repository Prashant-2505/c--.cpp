#include <bits/stdc++.h>
using namespace std;

void print(set<string> &S)
{
    for (string it : S)
    {
        cout << it << endl;
    }
}

int main()
{
    set<string>S; 
    S.insert("ABC");
    S.insert("opo");
    S.insert("plo");
    S.insert("opo");
    print(S);
}