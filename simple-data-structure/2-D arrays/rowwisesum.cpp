#include <bits/stdc++.h>
using namespace std;
void sumofarray(int arr[][4], int n, int m)
{
    int sum[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i] += arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << sum[i] << " ";
    }
}
int main()
{
    int arr[3][4];
    cout << "Enter elements of array" << endl;

    // taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // giving output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    sumofarray(arr, 3, 4);
}