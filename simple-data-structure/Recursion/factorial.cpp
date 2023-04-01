#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int chotti = factorial(n - 1);
        int badi = n * chotti;
        return badi;
    }
}
int main()
{
    int n;
    cout << "Enter the no. whose factorial u want to find" << endl;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
}