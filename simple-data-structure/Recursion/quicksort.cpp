#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right index
    int pivotindex = s + count;
    swap(arr[s], arr[pivotindex]);

    // Ab left or right vala part pivot element se chotte or bde respectively hone chiye
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {

        if (arr[i] < arr[pivotindex])
        {
            i++;
        }

        if (arr[j] > arr[pivotindex])
        {
            j--;
        }

        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    // Base case
    if (s >= e)
    {
        return;
    }

    // Partition
    int p = partition(arr, s, e);

    // Left vala array sort
    quicksort(arr, s, p - 1);

    // Right wala array sort
    quicksort(arr, p + 1, e);
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
    quicksort(arr, 0, n - 1);
    cout << "Reverse is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}