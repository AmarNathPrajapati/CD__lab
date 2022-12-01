#include <iostream>
#include <string>
using namespace std;
void isComment(string &line)
{
    if (line[0] == '/' && line[1] == '/' && line[2] != '/')
    {
        cout << "It is a single-line comment\n";
    }
    else if (line[line.size() - 2] == '*' && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*')
    {
        cout << "It is a multi-line comment\n";
    }
    else
    {
        cout << "It is not a comment\n";
    }
}
int main()
{
    string s;
    getline(cin, s);
    isComment(s);
    return 0;
}
