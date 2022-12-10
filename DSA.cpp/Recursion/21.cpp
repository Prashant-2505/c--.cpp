// sort array using recursion


 #include<bits/stdc++.h>
 using namespace std ;
    
bool sorted(int A[],int n)
{
    if (n==0 || n ==1)
    {
        return true;
    }  
   
    if (A[0]>A[1])
    {
        return false;
    }
    return sorted(A+1,n-1);
}

 int main()
 {
 int n ;
 cin>>n;
 int *A = new int [n];
 for(int i=0;i<n;i++)
 {
    cin>>A[i];
 }
bool ans = sorted(A,n);
if(ans)
{
    cout<<"sorted ";
}
else{
    cout<<" not sorted";
}

delete []A;
 return 0;
 }