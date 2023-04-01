#include <bits/stdc++.h>
using namespace std;
void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << " ";
        counting(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter last no. of reverse counting" << endl;
    cin >> n;
    counting(n);
}