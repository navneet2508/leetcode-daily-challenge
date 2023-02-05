#include <bits/stdc++.h>
using namespace std;
void binarybits(int n)
{
    int total = 0;
    while (n != 0)
    {
        int a = n % 2;
        n = n / 2;
        total = total + a;
    }
    if (total == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter no which u want to check whether power of 2 or not" << endl;
    cin >> n;
    binarybits(n);
}