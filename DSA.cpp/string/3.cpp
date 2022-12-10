// check string is palindrome or not

#include <bits/stdc++.h>
using namespace std;
char to_lower_case(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
string is_palindrome(char name[], int e)
{
    int len = e - 1;
    int a = 0;
    while (a <= len)
    {
        if (to_lower_case(name[a]) != to_lower_case(name[len]))
        {
            return "no";
        }
        else
        {
            a++;
            len--;
        }
    }
    return "yes";
}
int main()
{
    char name[10];
    cin >> name;
    int count{0};
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    cout << is_palindrome(name, count);

    return 0;
}