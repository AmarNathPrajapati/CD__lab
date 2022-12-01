#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flagv = 0;
    cout << "enter any value: ";
    cin >> s;
    // check whether it is a valid constant or not
    for (int i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]))
        {
            flagv = 1;
        }
    }
    // if flagv=1 then string is not a valid constant
    if (flagv == 1)
        cout << s << " is not valid constant";
    // otherwise string is a valid constant
    else
        cout << s << " is valid constant";
    return 0;
}
