// power of int
// time complexity o(log n)


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << " enter the no and it power" << endl;
    cin >> n >> m;
    int res = 1;
    while (m > 0)
    {
        if (m & 1)
        {
            res = res * n;
        }
        n = n * n;
        m = m / 2;
    } 
    cout<< res;
    return 0;
}