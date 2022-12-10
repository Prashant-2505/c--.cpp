#include<iostream>
using namespace std;

class question{
public:
question(string question, int pointValue, string opt1,string opt2, string opt3, string opt4){
    int userinput;
    cout<<"Your question is :"<<endl<<question;
    cout<<endl<<"1. "+opt1<<endl<<"2. "+opt2<<endl<<"3. "+opt3<<endl<<"4. "+opt4<<endl;
    cin>>userinput;
    if (userinput== pointValue) {
        cout<<endl<<"Your answer is correct";
    }
    else
        cout<<endl<<"Your answer is incorrect";
}
 /*question(string question, int pointValue){
    int userinput;
    cout<<"Your question is :"<<endl<<question<<endl;
    cout<<endl<<"1. True"<<endl<<"2. False"<<endl;
    cin>>userinput;
    if (userinput == pointValue) {
        cout<<"Your answer is correct";
    }
    else
        cout<<"Your answer is incorrect";
}*/

};

int main(){
question q = question("What is Capital of India ?",1,"Delhi","kolkata","Mumbai","Chennai");
}

