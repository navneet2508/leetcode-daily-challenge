#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        bubblesort(arr, size - 1);
    }
}
int main()
{
    int n;
    cout << "Enter size of array " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements of ur array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
    cout << "Reverse is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}