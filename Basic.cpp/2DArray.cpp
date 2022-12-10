 #include<iostream>
using namespace std;

int main()
{

    string animal [2] [3] = {
                    {"Dog ","cat ","monkey "},
                    {"lion ","Tiger ","Fox "}

    };

    for ( int i = 0; i < 2; i++)
    {
    for ( int j = 0; j < 3; j++)
    cout<<animal[i][j]<<flush;
    {

    }
    cout<<endl;
    }


    return 0;

}









/*  #include<iostream>
using namespace std;
int main()
{

int arr2d[2][3] = {  {1,2,3},
                          {4,5,6}};

     for (int i = 0; i < 2; i++)
    {
         for (int j = 0; j < 3; j++)
         {
             cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
         }

     }
     return 0;
}              */
