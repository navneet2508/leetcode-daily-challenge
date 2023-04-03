#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    // COPY VALUES
    int minindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[minindex];
        minindex++;
    }

    int minarrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[minarrayindex];
        minarrayindex++;
    }

    // MERGE 2 SORTED ARRAYS
    int index1 = 0;
    int index2 = 0;
    int mainindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainindex++] = first[index1++];
        }
        else
        {
            arr[mainindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainindex++] = second[index2++];
    }
}

void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
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
    mergesort(arr, 0, n - 1);
    cout << "Reverse is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}