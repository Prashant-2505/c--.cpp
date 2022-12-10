#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflowed" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " no element in stack " << endl;
        }
    }

    void empty()
    {
        if (top == -1)
        {
            cout << " stack is empty " << endl;
        }
    }

    void peak()
    {
        if (top >= 0 )
            cout << arr[top] << endl;
            else
            cout<<" no element in array ";
    }
};

int main()
{
    stack st(6);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.peak();
   
}