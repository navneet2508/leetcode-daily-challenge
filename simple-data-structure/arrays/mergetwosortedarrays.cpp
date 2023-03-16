#include <bits/stdc++.h>
using namespace std;
void mergesortedarray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void printarr(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[9] = {0};
    mergesortedarray(arr1, 5, arr2, 4, arr3);
    printarr(arr3, 9);
    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(3);
    // v1.push_back(5);
    // v1.push_back(7);
    // v1.push_back(9);

    // vector<int> v2;
    // v2.push_back(2);
    // v2.push_back(4);
    // v2.push_back(6);
    // v2.push_back(8);
    // vector<int> ans = mergesortedarray(v1, v2);
    // for (int z = 0; z < v1.size() + v2.size(); z++)
    // {
    //     cout << ans.at(z) << " ";
    //     // cout << ans.at(1) << " ";
    //     // cout << ans.at(2) << " ";
    //     // cout << ans.at(3) << " ";
    //     // cout << ans.at(4) << " ";
    //     // cout << ans.at(5) << " ";
    //     // cout << ans.at(6) << " ";
    //     // cout << ans.at(7) << " ";
    //     // cout << ans.at(8) << " ";
    // }
}
