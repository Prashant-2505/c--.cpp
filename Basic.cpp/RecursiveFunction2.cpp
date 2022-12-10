#include <iostream>
using namespace std;
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    return 0;
}
int main()
{
    int result, n;
    
    cin>>n;
    result = sum(n);
    cout<<" sum of "<<n<<" is "<<result;

    return 0;
}