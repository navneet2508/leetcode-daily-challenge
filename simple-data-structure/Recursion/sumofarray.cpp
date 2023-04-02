#include <bits/stdc++.h>
using namespace std;
int getSum(int arr[], int size)
{

    if (size == 0)
    {
        return 0;
    }
    else
    {
        if (size == 1)
        {
            return arr[0];
        }
        else
        {
            int sum = arr[0] + getSum(arr + 1, size - 1);
            return sum;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    // Creating array of variable size
    int *arr = new int[n];

    // Taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum of all elements of array is : " << ans << endl;
}