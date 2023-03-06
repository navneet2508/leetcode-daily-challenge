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

int binarysearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] > key)
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
    return -1;
}
int main()
{
    int arr[7] = {5, 8, 10, 13, 1, 3, 4};
    int pivot = getpivot(arr, 7);
    // cout << pivot;
    int ans;
    int key = 3;
    if (key >= arr[pivot] && key <= arr[6])
    {
        ans = binarysearch(arr, pivot, 6, key);
    }
    else
    {
        ans = binarysearch(arr, 0, pivot - 1, key);
    }
    cout << ans << endl;
}