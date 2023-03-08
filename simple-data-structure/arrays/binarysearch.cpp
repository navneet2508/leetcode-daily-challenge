#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
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
    return mid;
}
int main()
{
    int arr[8] = {1, 3, 4, 6, 7, 8, 12, 19};
    int ans = binarysearch(arr, 8, 7);
    cout << ans << endl;
}