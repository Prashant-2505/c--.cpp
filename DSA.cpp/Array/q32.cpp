
// code studion [medium]
// [book allocation]
// time ---> o(log n)



#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    

    for(int i = 0; i<n; i++)
     {  
        // add the sum of of all elements of array and compare with mid
        if(pageSum + arr[i] <= mid) 
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid )
             {
            return false;
             }
            pageSum = arr[i];
        }
       
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
   
    
    while(s<=e)
    {
         int mid = s + (e-s)/2;
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}


int main()
{
    int n;
    cout << " Enter the total no of books " << endl;
    cin >> n;
    cout << " Enter the pages of books " << endl;
   vector<int> A;
    for (int i = 0; i < n; i++)
    { int x;
        cin >> x;
        A.push_back(x);
    }
    cout << " Enter the total no of student to allocate book " << endl;
    int m;
    cin >> m;

    cout <<allocateBooks(A,n, m) ;
    return 0;
}

