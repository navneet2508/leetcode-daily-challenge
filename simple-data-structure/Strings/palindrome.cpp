#include <bits/stdc++.h>
using namespace std;
int length(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkpalindrome(char ch[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (ch[s] != ch[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char ch[20];
    cout << "Enter your string whose palindrome u want to check" << endl;
    cin >> ch;
    int len = length(ch);
    cout << "Palindrome or not? " << checkpalindrome(ch, len);
}