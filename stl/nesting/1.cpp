// map and pair nesting


#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string,string>,vector<int>> A;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int i=0;i<ct;i++)
        {
            int x;
            cin>>x;
            A[{fn,ln}].push_back(x);
        }
    }
    for (auto pr : A)
    {
        auto full_name = pr.first;
        auto list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto element:list)
        {
            cout<<element<<endl;
        }

    }
}