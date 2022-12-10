/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1).
Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are
 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to
 it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1},
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at
(3, 3) from (0, 0) by two paths - DRDDRR
and DDRDRR, when printed in sorted order
we get DDRDRR DRDDRR



Example 2:
Input:
N = 2
m[][] = {{1, 0},
         {1, 0}}
Output:
-1
Explanation:
No path exists and destination cell is
blocked.
Your Task:
You don't need to read input or print anything. Complete the function printPath() which takes N
and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order.
Note: In case of no path, return an empty list. The driver will output "-1" automatically.

Expected Time Complexity: O((3N^2)).
Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.
*/

#include <bits/stdc++.h>
using namespace std;

bool is_safe(vector<vector<int>> &M, vector<vector<int>> &visited, int newx, int newy, int n)
{
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && visited[newx][newy] == 0 && M[newx][newy] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &M, int n, vector<string> &ans, vector<vector<int>> &visited, int srcx, int srcy, string path)
{

    // base condition
    if (srcx == n - 1 && srcy == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // case 1 = down
    int newx = srcx + 1;
    int newy = srcy;
    if (is_safe(M, visited, newx, newy, n))
    {
        path.push_back('D');
        visited[srcx][srcy] = 1;
        solve(M, n, ans, visited, newx, newy, path);
        path.pop_back();
        visited[srcx][srcy] = 0;
    }

    // case 3 = left
    newx = srcx;
    newy = srcy - 1;
    if (is_safe(M, visited, newx, newy, n))
    {
        path.push_back('L');
        visited[srcx][srcy] = 1;
        solve(M, n, ans, visited, newx, newy, path);
        path.pop_back();
        visited[srcx][srcy] = 0;
    }

    // case 2 = right
    newx = srcx;
    newy = srcy + 1;
    if (is_safe(M, visited, newx, newy, n))
    {
        path.push_back('R');
        visited[srcx][srcy] = 1;
        solve(M, n, ans, visited, newx, newy, path);
        path.pop_back();
        visited[srcx][srcy] = 0;
    }

    // case = 4 up
    newx = srcx - 1;
    newy = srcy;
    if (is_safe(M, visited, newx, newy, n))
    {
        path.push_back('U');
        visited[srcx][srcy] = 1;
        solve(M, n, ans, visited, newx, newy, path);
        path.pop_back();
        visited[srcx][srcy] = 0;
    }
}

vector<string> findpath(vector<vector<int>> &M, int n)
{

    vector<string> ans;
    vector<vector<int>> visited = M;

    if (M[0][0] == 0)
    {
        return ans;
    }

    if (M[n - 1][n - 1] == 0)
    {
        ans.push_back("-1");
        return ans;
    }

    int srcx = 0;
    int srcy = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    string path = "";

    solve(M, n, ans, visited, srcx, srcy, path);

    return ans;
}

int main()
{
    vector<vector<int>> M;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        M.push_back(temp);
    }

    cout << endl;

    vector<string> s = findpath(M, n);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}