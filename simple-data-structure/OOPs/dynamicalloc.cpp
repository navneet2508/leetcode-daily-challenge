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
    // Dynamically allocation of object
    Hero *shyam = new Hero;

    (*shyam).setHealth(50);
    (*shyam).level = 3;
    cout << "Health is : " << (*shyam).getHealth() << endl;
    cout << "Level is : " << (*shyam).level << endl;
    cout << "Size of class is : " << sizeof(*shyam) << endl;

    cout << endl;

    shyam->setHealth(50);
    shyam->level = 3;
    cout << "Health is : " << shyam->getHealth() << endl;
    cout << "Level is : " << shyam->level << endl;
    cout << "Size of class is : " << sizeof(*shyam) << endl;
}