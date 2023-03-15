#include <bits/stdc++.h>
using namespace std;
int bubblesort(int arr[], int n)
{
    for (int round = 0; round < n - 1; round++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[7] = {23, 14, 7, 67, 0, 50, 99};
    int ans = bubblesort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}