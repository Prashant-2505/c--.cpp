// fibonaci series


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int sum;
    cin >> n;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << sum;
    return 0;
}