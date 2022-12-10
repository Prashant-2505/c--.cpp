#include <bits/stdc++.h>
using namespace std;

int getlength(char name[])
{
    int count;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse_string(char name[], int e)
{
    reverse (name,name+e);
    cout<<name;
}
int main()
{
    char name[20];
    cin >> name;
    cout << name << endl;
    int len = getlength(name);
    cout<<len<<endl;
    reverse_string(name, len);
    return 0;
}