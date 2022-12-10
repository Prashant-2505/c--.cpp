// power set 

#include <bits/stdc++.h>

using namespace std;

void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        recurPermute(index + 1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    recurPermute(0, nums, ans);
    return ans;
}

int main()
{

    vector<int> v;
    int n;
    cout << "Enter the size of vector" << endl;
    cin >> n;
    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<vector<int>> sum = permute(v);
    cout << "All Permutations are" << endl;
    for (int i = 0; i < sum.size(); i++)
    {
        for (int j = 0; j < sum[i].size(); j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}