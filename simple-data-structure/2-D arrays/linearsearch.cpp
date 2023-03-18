#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[][4], int element, int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == element)
            {
                return 1;
            }
        }
    }
    return 0;
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
    int element;
    cout << "Enter element u want to search" << endl;
    cin >> element;

    if (linearsearch(arr, element, 3, 4))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}