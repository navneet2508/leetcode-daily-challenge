#include <bits/stdc++.h>
using namespace std;
bool sortedandrotated(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }
    if (count <= 1)
    {
        return true;
    }
}
int main()
{
    int arr[6] = {3, 4, 5, 6, 1, 2};
    int ans = sortedandrotated(arr, 6);
    cout << ans << endl;
}