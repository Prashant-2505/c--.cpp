#include<iostream>
using namespace std;

void showMenu(){                           // void is function that return value to the int main
                                           // here we create the function named showmenu
cout<<" 1. Search "<<endl;
cout<<" 2. View record "<<endl;
cout<<" 3. Quit "<<endl;

}

int main()
{

showMenu();                              // Here we call the function show menu from the void
cout<<" Enter your selection "<<endl;
int input;
cin>>input;

switch (input)
{
case 1:
    cout<<" Searching....... "<<endl;
    break;
case 2:
    cout<<" Vewing.......... "<<endl;
    break;
case 3:
     cout<<" Quiting.......... "<<endl;
     break;

default:
     cout<<" Please enter the right input ";
    break;
}


    return 0;
}
