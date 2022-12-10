#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> A)
{
    cout << A.size() << endl;
    for (auto &it : A)
    {
        cout << it.first << " " << it.second << endl; // time complexity of accessing is also O(log(n))
    }
}

int main()
{

    map<int, string> A;
    A[1] = {"abs"};
    A[9] = {"dfg"}; // time complexity of insertion is  O(log (N))
    A[2] = {"erf"};
    A.insert({4, "opo"}); // you can also insert in map
    print(A);

    auto it = A.find(3);
    if (it == A.end())
    {
        cout << " no value";
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}