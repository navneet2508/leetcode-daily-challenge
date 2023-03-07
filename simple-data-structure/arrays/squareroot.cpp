#include <bits/stdc++.h>
using namespace std;
int squareroot(int key)
{
    int s = 0;
    int e = key;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == key)
        {
            return mid;
        }
        else
        {
            if (mid * mid > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return mid - 1;
}
int main()
{
    int ans = squareroot(64);
    cout << ans << endl;
}