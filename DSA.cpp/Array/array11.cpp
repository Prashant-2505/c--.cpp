// get
// set
// min,max
// sum,average

#include <iostream>
using namespace std;

class array
{
    private:
    int A[20] =  {2, 3, 4, 6, 8, 9};
    int length =6;
    int size;

public:
    array()
    {
        
    }

    void display()
    {
        cout << " Elements are " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }

    int get(int index)
    {
        if (index >= 0 && index < length)
            cout << " Get operation is performed ";
        return A[index];
        return -1;
    }

    void set(int index, int x)
    {
        if (index >= 0 && index < length)
            A[index] = x;
        cout << " Set operation is performed " << endl;
    }

    int max()
    {
        int max;
        max = A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i] > max)
                max = A[i];
        }
        cout << " Max is ";
        return max;
        return 0;
    }

    int min()
    {
        int min = A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i] < min)
                min = A[i];
        }
        cout << " Min is ";
        return min;
        return 0;
    }

    int sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        cout << " Sum is ";
        return sum;
    }

    float average()
    {
        cout << " Average is ";
        return (float)sum() / length;
    }
};
int main()
{
   array a;
  
    cout << a.get( 5) << endl;
    a.display();
    cout << endl;
    a.set(3, 2);
    a.display();
    cout << endl;
    cout << a.max() << endl;
    cout << a.min() << endl;
    cout << a.sum() << endl;
    cout << a.average() << endl;
}
