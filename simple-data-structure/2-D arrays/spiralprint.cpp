#include <bits/stdc++.h>
using namespace std;
int spiralprint(int arr[][4], int n, int m)
{
    int temp[16];
    int count = 0;
    int total = n * m;
    int firstrow = 0;
    int firstcol = 0;
    int lastrow = n - 1;
    int lastcol = m - 1;
    while (count < total)
    {
        // print first row
        for (int index = 0; count < total && index < lastcol; index++)
        {
            temp[index] = arr[firstrow][index];
            count++;
        }
        firstrow++;

        // print last col
        for (int index = firstrow; count < total && index < lastrow; index++)
        {
            temp[index] = arr[index][lastcol];
            count++;
        }
        lastcol--;

        // print last row
        for (int index = lastcol; count < total && index < firstcol; index--)
        {
            temp[index] = arr[lastrow][index];
            count++;
        }
        lastrow--;

        // print first col
        for (int index = lastrow; count < total && index < firstrow; index--)
        {
            temp[index] = arr[index][firstcol];
            count++;
        }
        firstcol++;
    }
    return temp[16];
}
int main()
{
    int arr[3][4];
    cout << "Enter the array" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << spiralprint(arr, 4, 4);
}