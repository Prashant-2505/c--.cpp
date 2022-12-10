#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int N;
    int K;
    while (t--)
    {
        cin >> N >> K;
        multiset<long long int> bags;
        for (int i = 0; i < N; i++)
        {
            int candy_cnt;
            cin >> candy_cnt;
            bags.insert(candy_cnt);
        }
        long long total_candy{0};
        for (int i = 0; i < K; i++)
        {
            auto last_it = (--bags.end());
            total_candy = total_candy + *last_it;
            bags.erase(last_it);
            bags.insert(*last_it / 2);
        }
        cout << total_candy << endl;
    }
}