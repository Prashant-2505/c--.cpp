// sprial matrix clock-wise

/*
54. Spiral Matrix
Medium

Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100


*/


#include<bits/stdc++.h>
using namespace std ;
void ans(int A[4][4])
{
    int minR=0;
    int minC=0;
    int maxR = 4-1;
    int maxC=4-1;
    int count =1;
    int total = 16;

       
        while(count<=total){
            //uppar wali wall,row will remain same and col will vary
            for(int j=minC,i=minR;j<=maxC && count<=total ;j++){
               cout<<A[i][j]<<" ";
                count++;
            }
            minR++;
            
            //right wali wall,col will remain same and row will vary
            for(int i=minR,j=maxC;i<=maxR && count<=total ;i++){
               cout<<A[i][j]<<" ";
                count++;
            }
            maxC--;
            
            //bottom wali wall,row will remain same and col will vary
            for(int j=maxC,i=maxR;j>=minC && count<=total; j--){
              cout<<A[i][j]<<" ";
                count++;
            }
            maxR--;
            
            //left wali wall,col will remain same and row will vary
            for(int i=maxR,j=minC;i>=minR && count<=total; i--){
                cout<<A[i][j]<<" ";
                count++;
            }
            minC++;
    }
}

int main()
{
    int n = 4;
    int m = 4;

    int A[4][4];
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

    ans(A);
return 0;
}