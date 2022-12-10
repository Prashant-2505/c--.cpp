//[merge intervals]
//[babbar dsa sheet]
//[leetcode 53]
//[time complexity ---> o(nlog(n))]
// space complexity ---> O(n)



// using stack

#include <bits/stdc++.h>
using namespace std;
stack<pair<int, int>> ans(vector<pair<int, int>> A)
{
    stack<pair<int, int>> st;
    sort(A.begin(), A.end());
    st.push({A[0].first, A[0].second});

    for (int i = 1; i < A.size(); i++)
    {
        int start1 = st.top().first;
        int end1 = st.top().second;
        int start2 = A[i].first;
        int end2 = A[i].second;

        // cant overlap
        if (end1 < start2)
        {
            st.push({start2, end2});
        }

        // overlap
        else
        {
            st.pop();
            end1 = max(end1, end2);
            st.push({start1, end1});
        }
    }
    return st;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> A;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        A.push_back(pair<int, int>(x, y));
    }

    stack<pair<int, int>> S = ans(A);

    while (!S.empty())
    {
        cout << S.top().first << " " << S.top().second << endl;
        S.pop();
    }

    return 0;
}