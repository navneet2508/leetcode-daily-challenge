#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Creating Dynamic size 2-D Array
    int row;
    int col;
    cout << "Enter no. of rows " << endl;
    cin >> row;
    cout << "Enter no. of columns " << endl;
    cin >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // Creation done

    // Taking Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Giving Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}