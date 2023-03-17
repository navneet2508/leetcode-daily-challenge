#include <bits/stdc++.h>
using namespace std;
void rotatearray(int arr[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n - k; i++)
    {
        temp[i] = arr[i + k];
    }
    int j = 0;
    for (int i = n - k; i < n; i++)
    {

        temp[i] = arr[j];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;
    rotatearray(arr, 6, 2);
    // printarr(temp, 6);
}