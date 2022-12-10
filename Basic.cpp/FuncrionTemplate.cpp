#include<iostream>
using namespace std;

template<class T>                  // its a template used for calling the same  function different data types 
T minim(T a, T b)                  //              syntax
{                                  //     template<class name>
return a<b?a:b;                    //      name function(name variable, name variable)
}                                  //     {
                                   //       return
                                   //      }
                                   //
int main()                         
{                                   
    cout<<minim(12,34)<<endl;          // called function data type int                        
    cout<<minim(12.5f,12.1f)<<endl;    // called function data type float                            
    cout<<minim(222.232,111.232);
    return 0;                                  
}