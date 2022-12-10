/*
240. Search a 2D Matrix II
Medium


Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 

Example 1:


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true
Example 2:


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= n, m <= 300
-109 <= matrix[i][j] <= 109
All the integers in each row are sorted in ascending order.
All the integers in each column are sorted in ascending order.
-109 <= target <= 109

*/


#include<bits/stdc++.h>
using namespace std ;
void ans (vector<vector<int>> V ,int t)
{
    
    int row =  V.size();
    int col =  V[0].size();

    int row_index = 0;
    int col_index = col;
   while(row_index<row && col_index >=0)
    {
        
        int element = V [row_index][col_index];
        if (element == t)
        {
            cout<<" yes ";
        }

        if(t<element)
        {
         col_index --;
        }
        else
        {
            row_index ++;
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