#include <bits/stdc++.h>
using namespace std;
// We are traversing loop till null character because string contains null character at last position
int lengthofstring(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[20];
    cout << "Enter your name" << endl;
    cin >> ch;
    int ans = lengthofstring(ch);
    cout << "Length of your name is " << ans << endl;
}