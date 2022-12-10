

#include <iostream>
using namespace std;

int main()
{

    int A[] = {2, 99, 34, 65, 88,990,765};
    int n{7}, max;
    max = A[0];

    for (int i = 1; i < 7; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    cout <<" max is " <<max<< endl;

    return 0;
}



/* Explantion

i      A[i]       if(A[i]>max)
                    max=A[i]
A0       2             2
A1       99            99
A2       34            99
A3       65            99
A4       88            99
A5       990           990
A6       765           990

*/
