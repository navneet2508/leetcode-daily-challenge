#include <bits/stdc++.h>
using namespace std;
bool binarysearch(int *arr, int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
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