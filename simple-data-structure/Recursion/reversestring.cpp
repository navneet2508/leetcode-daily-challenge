#include <bits/stdc++.h>
using namespace std;
void reversestring(int s, int e, string &str)
{
    if (s > e)
    {
        return;
    }
    else
    {
        swap(str[s], str[e]);
        s++;
        e--;
        reversestring(s, e, str);
    }
}
int main()
{
    string str;
    cout << "Enter ur string " << endl;
    cin >> str;
    int s = 0;
    int e = str.size() - 1;
    reversestring(s, e, str);
    cout << "Reverse is : " << str << endl;
}