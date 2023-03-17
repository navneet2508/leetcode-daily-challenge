#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}
vector<int> addtwoarrays(vector<int> a, int n, vector<int> b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
int main()
{
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(1);

    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    vector<int> ans = addtwoarrays(v1, v1.size(), v2, v2.size());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}