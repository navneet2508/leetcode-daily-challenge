#include <bits/stdc++.h>
using namespace std;
int PeakMountainArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return arr[mid];
}
int main()
{
    int arr[8] = {4, 5, 7, 11, 15, 8, 6, 2};
    int ans = PeakMountainArray(arr, 8);
    cout << ans << endl;
    return 0;
}