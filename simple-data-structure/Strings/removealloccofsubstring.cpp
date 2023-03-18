#include <bits/stdc++.h>
using namespace std;
string removealloccofsubstring(string str, string part)
{
    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter your string whose substring you want to remove" << endl;
    getline(cin, str);

    string part;
    cout << "Enter part of string u want to remove" << endl;
    getline(cin, part);

    cout << "Your string after removal of substring ->" << removealloccofsubstring(str, part);
}