#include <bits/stdc++.h>
using namespace std;
bool checkpalindrome(int s, int e, string &str)
{
    if (s > e)
    {
        return true;
    }
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkpalindrome(s + 1, e - 1, str);
    }
}
int main()
{
    string str;
    cout << "Enter ur string " << endl;
    cin >> str;
    int s = 0;
    int e = str.size() - 1;
    bool ans = checkpalindrome(s, e, str);
    if (ans)
    {
        cout << "It is palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome " << endl;
    }
}