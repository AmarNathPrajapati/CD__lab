#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "enter any value: ";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            cout << "2";
        }
        else if (s[i] == '*')
        {
            cout << "3";
        }
        else if (s[i] == '(' || s[i] == '{')
        {
            cout << "4";
        }
        else if (s[i] == ')' || s[i] == '}')
        {
            cout << "5";
        }
        else if (isdigit(s[i]))
        {
            while (isdigit(s[i]))
            {
                i++;
            }
            i--;
            cout << "1";
        }
    }
    return 0;
}
