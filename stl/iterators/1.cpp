#include <bits/stdc++.h>
using namespace std;

void learn_iterators()
{
    vector<int> A;
    A = {1, 2, 3, 4, 5};

    vector<int>::iterator it;
    for (it = A.begin(); it < A.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // for each loop
    // while using for each loop with auto you dont have to intailaize iterator auto will make thing easy
    for (auto &it : A)
    {
        cout << it << " ";
    }
    cout << endl;

    // pair
    vector<pair<char, int>> B;
    B = {{'A', 1}, {'B', 2}, {'C', 3}};


    // vector<pair<char, int>>::iterator it2;

    for (auto &it2 : B)
    {
        cout << it2.first << " " << it2.second << endl;
    }
}

int main()
{

    learn_iterators();
    return 0;
}