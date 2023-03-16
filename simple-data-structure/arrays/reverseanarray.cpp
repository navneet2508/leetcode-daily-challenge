#include <bits/stdc++.h>
using namespace std;
int reversearray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int ans = reversearray(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}