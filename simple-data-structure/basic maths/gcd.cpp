#include <bits/stdc++.h>
using namespace std;
int gcd(int n, int m)
{
    if (n == 0)
    {
        return m;
    }
    if (m == 0)
    {
        return n;
    }
    while (n != m)
    {
        if (n > m)
        {
            n = n - m;
        }
        else
        {
            m = m - n;
        }
    }
    return n;
}
int main()
{
    int n, m;
    cout << "Enter numbers whose greatest common divisor(HCF) u want to find" << endl;
    cin >> n >> m;
    int ans = gcd(n, m);
    cout << "GCD is ->" << ans << endl;
}