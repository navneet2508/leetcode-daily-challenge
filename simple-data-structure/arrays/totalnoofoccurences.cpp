#include <bits/stdc++.h>
using namespace std;
int firstoccurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans1 = -1;
    while (s < e)
    {
        if (arr[mid] == k)
        {
            ans1 = mid;
            e = mid - 1;
        }
        else
        {
            if (arr[mid] < k)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return ans1;
}
int lastoccurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans2 = -1;
    while (s < e)
    {
        if (arr[mid] == k)
        {
            ans2 = mid;
            s = mid + 1;
        }
        else
        {
            if (arr[mid] < k)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return ans2;
}

int main()
{
    int odd[7] = {0, 2, 3, 5, 5, 5, 7};
    int even[10] = {1, 2, 4, 5, 6, 6, 6, 6, 6, 9};
    int answer1 = lastoccurence(odd, 7, 5) - firstoccurence(odd, 7, 5) + 1;
    int answer2 = lastoccurence(even, 10, 6) - firstoccurence(even, 10, 6) + 1;
    cout << "Total no. of occurences of 5 in array are " << answer1 << endl;
    cout << "Total no. of occurences of 6 in array are " << answer2 << endl;
}