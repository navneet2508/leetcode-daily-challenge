#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string replacespaces(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('1');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string str;
    cout << "Enter your string" << endl;

    // This is the method to enter a string with spaces
    getline(cin, str);

    string ans = replacespaces(str);
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i];
    }
}