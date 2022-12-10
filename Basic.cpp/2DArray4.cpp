#include<iostream>
using namespace std;
int main()
{
    int row, col, i, j, A[10][10];
    cout<<"Enter the Row and Column Size for Array: ";
    cin>>row>>col;
    cout<<"Enter "<<row*col<<" Array Elements: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cin>>A[i][j];
    }
    cout<<"The Array is: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<A[i][j]<<"  ";
        cout<<endl;
}

cout<<"\nArray Elements with its Index:\n";

for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
        cout<<"arr["<<i<<"]["<<j<<"] = "<<A[i][j]<<"  ";
    cout<<endl;
}
cout<<endl;
return 0;
}
