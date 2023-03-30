#include <bits/stdc++.h>
using namespace std;
// Removing all adjacent duplicates
string removeadjduplicates(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
            ans.pop_back();
        else
            ans.push_back(s[i]);
        i++;
    }
    return ans;
}
int main()
{
    string s;
    cout << "Enter ur string" << endl;
    getline(cin, s);
    cout << "Your string after removing adjacent duplicates is " << removeadjduplicates(s);
}