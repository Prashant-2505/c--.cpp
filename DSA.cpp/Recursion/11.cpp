// square root

#include <bits/stdc++.h>
using namespace std;

int power2(int x, int y)
{
     int ans ;

    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
       ans = power2(x * x, y / 2);
    }
    else
    {
       ans = x * power2(x * x, (y - 1) / 2);
    }
    return ans;
}

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    int ans = x * power(x, y - 1);
    return ans;
}

int main()
{
    int n;
    int m;
    cout << " enter the  no   " << endl;
    cin >> n;
    cout << " enter the power to raise " << endl;
    cin >> m;

    cout << power2(n, m);

    return 0;
}