// Leetcode plus one

#include <iostream>
#include <vector>
using namespace std;

class array
{
public:
    vector<int> plus_one(vector<int> v)
    {
        int n = v.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] < 9)
            {
                v[i]++;
                return v;
            }
            else
            {
                v[i] = 0;
            }
        }
        v.push_back(0);
        v[0] = 1;
        return v;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    array Arr;
    vector<int> B;
    B = Arr.plus_one(A);

    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
}