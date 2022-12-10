
// A B C D 
// E F G H 
// I J K L 
// M N O P 

#include <iostream>
using namespace std;
int main()
{
    auto count = 'A';
    int i = 0;
    int j = 0;
    int R;
    int C;
    cout<<" no of row ";
    cin>>R;
    cout<<" no of column ";
    cin>>C;

    for (int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
