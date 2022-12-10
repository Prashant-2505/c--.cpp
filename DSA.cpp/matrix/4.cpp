// largest row sum
// with row no


#include <bits/stdc++.h>
using namespace std;

pair<int,int> largest_row_sum(int A[][3])
{
    int sum;
    int max_sum;
    int count =0;
    int row;
    int col;
    for (int row = 0; row < 3; row++)
    {
        sum =0;
        for (int col = 0; col < 3; col++)
        {
            sum+=A[row][col];
        }
        if(max_sum< sum)
        {
            max_sum =sum;
            count ++;
        }
        
    }
    return pair<int,int>{count,max_sum};
}




int main()
{
    int n = 3;
    int m = 3;

    int A[3][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
      pair<int,int> ans = largest_row_sum(A);
     cout<<"row is ---> "<<ans.first<<" "
      <<"sum is ---> "<<ans.second;
       return 0;
}
      
    