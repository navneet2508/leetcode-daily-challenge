#include <bits/stdc++.h>
using namespace std;
// Create an array of count of characters
char getmaxoccchar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // Find max occuring character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}

int main()
{
    string s;
    cout << "Enter string of which u want to find max occurences" << endl;
    cin >> s;
    cout << "Max occurences is of letter-> " << getmaxoccchar(s) << endl;
}