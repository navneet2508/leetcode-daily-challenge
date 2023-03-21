#include <bits/stdc++.h>
using namespace std;
void update(int **p2)
{
    p2 = p2 + 1;
}

void update1(int **p2)
{
    *p2 = *p2 + 1;
}

void update2(int **p2)
{
    **p2 = **p2 + 1;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    // Before
    cout << "Print i   -> " << i << endl;
    cout << "Print *p  -> " << *p << endl;
    cout << "Print **p2 -> " << **p2 << endl;
    cout << "Print p2 -> " << p2 << endl;
    cout << "Print p  -> " << p << endl;
    cout << endl;
    // update(p2); // There will be no change
    update1(p2); // There will be change in *p and **p2 values
    // update2(p2); // There will be change in i ,*p and **p2 values

    // After
    cout << "Print i   -> " << i << endl;
    cout << "Print *p  -> " << *p << endl;
    cout << "Print **p2 -> " << **p2 << endl;
    cout << "Print p2 -> " << p2 << endl;
    cout << "Print p  -> " << p << endl;
    cout << endl;
}