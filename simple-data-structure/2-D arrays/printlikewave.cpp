#include <bits/stdc++.h>
using namespace std;
void printlikewave(int arr[][4], int n, int m)
{
    for (int j = 0; j < 4; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][j] << " ";
            }
        }

        else
        {
            for (int i = 2; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][4];
    // take input
    cout << "Enter your array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printlikewave(arr, 3, 4);
}