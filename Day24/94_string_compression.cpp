#include <iostream>
#include <string>
using namespace std;

string compress_string(string s)
{
    string new_str = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (i < s.length() - 1 && s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            new_str += s[i];
            new_str += to_string(count);
            count = 1;
        }
    }

    return new_str;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << compress_string(s);

    return 0;
}