#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &arr, int cows, int mid)
{
    int cowcount = 1;
    int lastpos = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount == cows)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int aggressivecows(vector<int> &arr, int cows)
{
    sort(arr.begin(), arr.end());
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, cows, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int size = 5;
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(6);

    int cows = 2;
    int ans = aggressivecows(arr, cows);
    cout << "Maximum distance between the aggressive cows is " << ans << endl;
}