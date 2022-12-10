# include<iostream>
using namespace std;
 
 int main()
 {
string phrase = "welcome to coding world";


     cout<<phrase<<endl;

     //check length of string
     cout<<phrase.length()<<endl;

     //to print word present on the no of string
     cout<<phrase[6]<<endl;
     
     //to find location of given word o string
     cout<<phrase.find("to")<<endl;

    //to find sub string from location(first no) and length(second no)
     cout<<phrase.substr(5, 9);


     return 0;
 }