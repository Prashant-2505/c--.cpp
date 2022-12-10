// sprial matrix anti clock-wise

#include<bits/stdc++.h>
using namespace std ;
void ans(int A[][3])
{
    int minr=0;
    int minc=0;
    int maxr = 3-1;
    int maxc=3-1;
    int count =0;
    int total = 9;

    while(count<total)
    {
        for(int i=minr, j=minc; i<=maxr;i++  && count<total)
        {
           cout<<A[i][j]<<" ";
           count ++;
        }
        minc++;

        for(int i=maxr, j= minc; j<= maxc;j++  && count<total)
        {
            cout<<A[i][j]<<" ";
            count ++;
        }
        maxr--;

        for(int i=maxr,j=maxc; i>=minr;i--   && count<total)
        {
            cout<<A[i][j]<<" ";
        }
        maxc--;

        for(int i=minr,j=maxc; j>=minc;j--   && count<total)
        {
            cout<<A[i][j]<<" ";
            count ++;
        }
        minr ++;
    }
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

    ans(A);
return 0;
}