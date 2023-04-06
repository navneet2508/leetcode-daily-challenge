#include <bits/stdc++.h>
using namespace std;
class Hero
{
private:
    int health;

public:
    int level;

    // Used to get health which is a private member of the class
    // GETTER
    int getHealth()
    {
        return health;
    }

    // Used to set health which is a private member of the class
    // SETTER
    void setHealth(int h)
    {
        health = h;
    }
};
int main()
{
    Hero ram;
    // ram.health = 70;
    ram.setHealth(50);
    ram.level = 3;
    cout << "Health is : " << ram.getHealth() << endl;
    cout << "Level is : " << ram.level << endl;
    cout << "Size of class is : " << sizeof(ram) << endl;
}