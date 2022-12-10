#include <iostream>
using namespace std;

int main()
{

    int n;
    float average, num[100], sum{0.0};

    while (n > 100 || n <= 0)
    {
        cout << " Enter the total elements " << endl;
        cin >> n;

        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {

        cout << i + 1 << " num is ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << " The average of no is " << average;

    return 0;
}