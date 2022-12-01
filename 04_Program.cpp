#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    int line = 1;
    cout << "enter the sentence (add $ at the end): \n\n";
    while ((ch = getchar()) != '$')
    {
        if (ch == ' ')
        {
            ch = ';';
        }
        else if (ch == '\t')
        {
            ch = '"';
        }
        else if (ch == '\n')
        {
            line++;
        }
        s.push_back(ch);
    }
    cout << "\n\nAltered Sentence is \n\n";
    cout << s << endl;
    cout << "\n No. of lines ---- " << line << endl;
    return 0;
}
