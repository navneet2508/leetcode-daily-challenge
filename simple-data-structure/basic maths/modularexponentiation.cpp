#include <bits/stdc++.h>
using namespace std;
int modularexponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}
int main()
{
    int x, n, m;
    cout << "Enter number whose power u want to take and power of that no. and no. which will modulo the number" << endl;
    cin >> x >> n >> m;
    int ans = modularexponentiation(x, n, m);
    cout << ans << endl;
}