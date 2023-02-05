#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the key u want to search" << endl;
    cin >> n;
    int arr[5] = {1, 5, 8, 4, 12};
    bool found = linearsearch(arr, 5, n);
    if (found == 1)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
}