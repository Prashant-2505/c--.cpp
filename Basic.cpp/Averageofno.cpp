#include <iostream>
using namespace std;

int main()
{

    float num[100];
    float average{0.0}, sum{0.0};
    int n{0};

    cout << " Enter the total no of elements ";
    cin >> n;

    for (int i = 0; i < n; i++)

    {

        cout << i + 1 << ". nums ";
        cin >> num[i];
        sum += num[i]; // Every time a number is entered by the user, its value is added to the sum variable.
    }
    average = sum / n;
    cout << " Average of nums is " << average;

    return 0;
}