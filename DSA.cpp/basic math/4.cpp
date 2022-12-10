// euclid algo to find gcd and lcm

#include <bits/stdc++.h>
using namespace std;

void gcd(int x, int y)
{
    int on_x = x;
    int on_y = y;
    int gcd = 0;
    if (x == 0)
    {
        gcd = y;
        cout << " gcd is " << gcd;
    }
    if (y == 0)
    {
        gcd = x;
        cout << " gcd is " << gcd;
    }
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }

    if (x == 0)
    {
        gcd = y;
        cout << " gcd is " << gcd;
    }
    else
    {
        gcd = x;
        cout << " gcd is " << gcd;
    }

    int lcm = (on_x * on_y)/gcd;
    cout<<" lcm is "<<lcm;
}

int main()
{
    int a, b;
    cout << " enter to no to found gcd " << endl;
    cin >> a >> b;
    gcd(a, b);
    return 0;
}