#include <bits/stdc++.h>
using namespace std;
int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;

    // Variable size array
    int *arr = new int[5];
    cout << "Enter elements of array" << endl;

    // Taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);
    cout << "Sum of all elements of array is -> " << ans << endl;

    // To free memory in Dynamic allocation we use keyword delete
    int *a = new int;
    delete a;

    // To free memory in Dynamic allocation of array we use keyword delete
    int *array = new int[50];
    delete[] array;
}