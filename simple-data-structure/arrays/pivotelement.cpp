#include <bits/stdc++.h>
using namespace std;
int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[7] = {5, 8, 10, 13, 1, 3, 4};
    int pivot = getpivot(arr, 7);
    cout << pivot;
}