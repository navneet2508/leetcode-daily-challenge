#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    else
    {
        if (size == 1)
        {
            if (arr[0] == key)
            {
                return true;
            }
        }
        else
        {
            bool ans = linearsearch(arr + 1, size - 1, key);
            return ans;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    // Creating array of variable size
    int *arr = new int[n];

    // Taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element u want to find " << endl;
    cin >> key;

    bool ans = linearsearch(arr, n, key);
    if (ans)
    {
        cout << "Found : " << endl;
    }
    else
    {
        cout << "Not Found : " << endl;
    }
}