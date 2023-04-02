#include <bits/stdc++.h>
using namespace std;
void saydigits(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    else
    {
        int digit = n % 10;
        n = n / 10;
        saydigits(n, arr);
        cout << arr[digit] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the no. u want to print" << endl;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigits(n, arr);
}