#include <bits/stdc++.h>
using namespace std;
int lengthofstring(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reversestring(char ch[], int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        cout << ch[i];
    }
}
int main()
{
    char ch[20];
    cout << "Enter string you want to reverse" << endl;
    cin >> ch;
    int length = lengthofstring(ch);
    reversestring(ch, length);
}