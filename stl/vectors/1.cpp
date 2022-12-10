#include <bits/stdc++.h>
using namespace std;

int main()
{
    // how to create a vector
    vector<int> A;

    //   how to allaocte element
    A.push_back(1);
    //   faster than push_back
    A.emplace_back(2);

    //  vector can use in pair
    vector<pair<int, int>> B;
    B.push_back({3, 4});
    B.push_back({5, 6});

    // create memory of 5 element of value 20
    vector<int> C(5, 20);
    // create memory pf 5 element of value z
    vector<char> D(5, 'Z');
    //  create memory pf 5 element 0 ya garbage value
    vector<int> E(5);

    //  copy element of vector F in G
    vector<int> F(5, 100);
    vector<int> G(F);

    //   access vector as array
    //   cout << A[0] << endl;
    //  cout << A[1] << endl;

    // acess vector using iterator
    // vector<int>::iterator it = A.begin();
    // cout << *(it) << " ";
    // it++;
    // cout << *(it) << endl;
    // it++;

    // vector<int>::iterator bt = A.end(); // A.end doesnt mean that it point at end element of vectors it point after the end elements
    // bt--;                               // if you want to point  at the end element of the vector you need to dercrement it first
    // cout << *(bt) << " ";
    // bt--;
    // cout << *(bt) << endl;
    // bt--;

    // access vector using loop
    // vector<int> H = {1, 2, 3, 4, 5};
    // for (vector<int>::iterator ct = H.begin(); ct != H.end(); ct++)
    // {
    //     cout << *(ct) << " ";
    // }
    // cout << endl;

    // using auto means it automatically understand data type and iterator too
    // for (auto ct = H.begin(); ct != H.end(); ct++)
    // {
    //     cout << *(ct) << " ";
    // }

    // cout << endl;

    // using for each loop with auto that understa ct is a int and gave you element of vector
    // for (auto ct : H)
    // {
    //     cout << ct << " ";
    // }
    //   cout << endl;

    // delete element in vector
    // H.erase(H.begin() + 1);
    // H.erase(H.begin() + 1, H.begin() + 3);
    // for (auto ct : H)
    // {
    //     cout << ct << " ";
    // }
    // cout << endl;

    // insert element in vector
    // H.insert(H.begin() + 1, 2);
    // H.insert(H.begin() + 2, 3);
    // for (auto ct : H)
    // {
    //     cout << ct << " ";
    // }
    // cout << endl;

    // // copy from one vector to another vector
    // vector<int> I;
    // I.insert(I.begin(), H.begin(), H.end());
    // vector<int>::iterator dt = I.begin();
    // for (auto dt : H)
    // {
    //     cout << dt << " ";
    // }
    // cout << endl;
    // H.pop_back(); // remove last element in vector
    // cout << H.size() << endl;

    // for (auto dt : H)
    // {
    //     cout << dt << " ";
    // }
    // H.clear();                 // erase vector
    // cout << H.empty() << endl; // check vector is empty or not use it in if else not directly

    // take inputs from user
    // vector<int> Z;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int X;
    //     cin >> X;
    //     Z.push_back(X);
    // }

    // // print normally like array
    // // z.size() automatically know tha size of array so in function you din t have to pass the size if you using vector

    // for (int i = 0; i < Z.size(); i++)
    // {
    //     cout << Z[i] << " ";
    // }

    // cout << endl;
    // // print using iterator
    // for (auto it = Z.begin(); it != Z.end(); it++)
    // {
    //     cout << *it << " ";
    //  }

    // using pair in vector

    // vector<pair<int, int>> V;
    // V = {{1, 2}, {3, 4}, {7, 8}};

  
    // for (int i = 0; i < V.size(); i++)
    // {
    //     cout << V[i].first << " " << V[i].second << endl;
    // }
    // cout<<" size of vector "<< V.size();


    // take input from user
// vector<pair<int, int>> O;
//   int n;
//   cin>>n;
//     for(int i=0;i<n;i++)
// {
//     int x,y;
//     cin>>x>>y;
//     O.push_back({x,y});
// }
//   for (int i = 0; i < V.size(); i++)
//     {
//         cout << O[i].first << " " << O[i].second << endl;
//     }



    return 0;
}