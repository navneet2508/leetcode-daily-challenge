#include <bits/stdc++.h>
using namespace std;
void sumofarray(int arr[][4], int n, int m)
{

    int sum[3] = {0};
    int maxi = INT_MIN;
    int rowindex = -1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i] += arr[i][j];
        }
        if (maxi < sum[i])
        {
            maxi = sum[i];
            rowindex = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << sum[i] << " " << endl;
    }
    cout << rowindex << endl;
    // sort(sum, sum + 2);
    // cout << sum[2];
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