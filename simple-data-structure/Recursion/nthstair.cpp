#include <bits/stdc++.h>
using namespace std;
int stairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            // No. of steps taken at a time is either 1 or 2
            int ans = stairs(n - 1) + stairs(n - 2);
            return ans;
        }
    }
}
int main()
{
    int n;
    cout << "Enter total no. of stairs" << endl;
    cin >> n;
    int ans = stairs(n);
    cout << ans << endl;
}