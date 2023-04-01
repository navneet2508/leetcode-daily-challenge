#include <bits/stdc++.h>
using namespace std;
void reachhome(int src, int dest)
{
    if (src == dest)
    {
        cout << "Reached Home!!" << endl;
        return;
    }
    else
    {
        src++;
        reachhome(src, dest);
    }
}
int main()
{
    int dest = 10;
    int steps = 1;
    // cout << "Enter your desination in steps" << endl;
    // cin >> dest;
    // cout << "Enter steps taken at one time" << endl;
    // cin >> steps;
    reachhome(steps, dest);
}