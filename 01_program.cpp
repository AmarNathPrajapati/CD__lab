#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> keywords = {
        "auto", "double", "int", "struct", "break", "else", "long",
        "switch", "case", "enum", "register", "typedef", "char",
        "extern", "return", "union", "const", "float", "short",
        "unsigned", "continue", "for", "signed", "void", "default",
        "goto", "sizeof", "voltile", "do", "if", "static", "while"};
    string str;
    cin >> str;
    int flag = 0;
    for (int i = 0; i < 32; i++)
    {
        if (str == keywords[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << str << " is a keyword" << endl;
    else
        cout << str << " is not a keyword" << endl;
    return 0;
}