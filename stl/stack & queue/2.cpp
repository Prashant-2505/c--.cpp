#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> A;
    A.push("abc");
    A.push("ojc");
    A.push("qac");
    A.push("lop");
    while (!A.empty())
    {
        cout << A.front()<<endl;
        A.pop();
    }
    return 0;
}
