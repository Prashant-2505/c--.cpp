#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        multiset<long long int> bags;
        for (int i = 0; i < n; i++)
        {
            int candy;
            cin >> candy;
            bags.insert(candy);
        }
        long long int total_candies{0};
        for (int i = 0; i < k; i++)
        {
            auto last_it = --bags.end();
            total_candies = total_candies + *last_it;
            bags.erase(last_it);
            bags.insert(*last_it / 2);
        }
        cout << total_candies;
    }
}
