/*
74. Search a 2D Matrix
Medium

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104


*/


#include <bits/stdc++.h>
using namespace std;

void ans(vector<vector<int>> A, int t)
{
    int s = 0;
    int e = A.size() * A[0].size() - 1;
    int col = A[0].size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int element = A[mid / col][mid % col];
        if (element == t)
        {
            cout << " elemnt is present " ;
            break;
        }
        else if (t < element)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}


int main()
{
    int n;
    cout << " Enter the row size " << endl;
    cin >> n;
    int m;
    cout << " Enter the col size " << endl;
    cin >> m;
    vector<vector<int>> V;
    cout<<" Enter the "<<n<<" no of row element in sorted order "<<endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        V.push_back(temp);
    }
    int t;
    cout << " enter the target " << endl ;
    cin >> t;
    ans(V, t);

    return 0;
}