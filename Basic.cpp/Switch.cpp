# include<iostream>
using namespace std;
int main()
{

int rating;
cout<<" Enter the star 1 to 5: "<<flush;
cin>>rating;

switch (rating)
{
case 1:
    cout<<" To bad:"<<endl;
    break;
case 2:
    cout<<" bad:"<<endl;
    break;
case 3:
    cout<<" Good:"<<endl;
    break;
case 4:
    cout<<" Very good:"<<endl;
    break;
 case 5:
     cout<<" Excellent:"<<endl;   
     break;
default:
cout<<" Ivalid rating;";
    break;
}


    return 0;
}