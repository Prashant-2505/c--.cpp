// say digit



 
  
 #include<bits/stdc++.h>
 using namespace std ;
    
 int main()
 {
 int n ;
 cout<<" Enter the no"<<endl;
 cin>>n;

int digit ;

string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
vector<string> ans;
for(int i=0;i<=n;i++)
{
  digit = n%10;
  ans.push_back(word[digit]);
  n = n/10;
}

for(int i=ans.size()-1;i>=0;i--)
{
    cout<<ans[i]<<" ";
}
 return 0;
 }