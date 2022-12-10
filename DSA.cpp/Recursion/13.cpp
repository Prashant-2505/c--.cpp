#include <bits/stdc++.h>
using namespace std;

void counting1(int x)
{
    if (x == 10)
    {
        return;
    }

    counting1(x + 1);
    cout << x;
}


    void counting2(int x)
    {
        if (x == 10)
        {
            return;
        }
         cout << x;
        counting2(x + 1);
       
    }

    int main()
    {
        int n = 1;
        counting1(n);
        cout<<endl;
        counting2(n);
        return 0;
    }