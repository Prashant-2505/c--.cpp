#include <iostream>
using namespace std;

int main()
{
    int n;
    int count;
    count=1;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)

                cout << " ";

            else
                cout << count++;
                
        }
        cout << endl;
    }

    return 0;
}

//   * * * *
//     * * *
//       * *
//         *