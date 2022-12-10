/*

Count Ways To
Reach The N - th  Stairs
Difficulty : MEDIUM
  
Problem Statement
                
You have been given a number of stairs . Initially , you are at the oth stair ,
and you need to reach the Nth stair . Each time you can either climb one
step or two steps . You are supposed to return the number of distinct ways
in which you can climb from the 0th step to Nth step .




*/



#include<bits/stdc++.h>
using namespace std ;




 int step (int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }

     int ans = step(n-1)+step(n-2);
    return ans;
}




int main()
{
int n;
cin>>n;

cout<<step(n);
return 0;
}