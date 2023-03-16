#include <bits/stdc++.h>
using namespace std;
void movezeroes(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
void printarr(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[8] = {2, 0, 1, 0, 6, 0, 0, 3};
    movezeroes(arr, 8);
    printarr(arr, 8);
}