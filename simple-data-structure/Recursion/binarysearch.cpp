#include <bits/stdc++.h>
using namespace std;

// To check the flow of code
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarysearch(int *arr, int s, int e, int key)
{
    // To print array according to flow
    print(arr, s, e);

    // Base condition
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    // To print value of mid at different flows
    cout << "Value of mid = " << arr[mid] << endl;

    if (arr[mid] == key)
    {
        return true;
    }
    else
    {
        if (arr[mid] < key)
        {
            return binarysearch(arr, mid + 1, e, key);
        }
        else
        {
            return binarysearch(arr, s, mid - 1, key);
        }
    }
}
int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;
    // Creating array of variable size
    int *arr = new int[size];

    // Taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element u want to find " << endl;
    cin >> key;

    int s = 0;
    int e = size - 1;
    bool ans = binarysearch(arr, s, e, key);
    if (ans)
    {
        cout << "Found : " << endl;
    }
    else
    {
        cout << "Not Found : " << endl;
    }
}