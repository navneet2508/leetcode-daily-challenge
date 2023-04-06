#include <bits/stdc++.h>
using namespace std;
class Hero
{
public:
    int health;
    int level;

    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }
    // If this constructor is made then default constructor will not be called.This will become default constructor.
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // Parametrized Constructor
    Hero(int health)
    {
        cout << "Parametrized Constructor with 1 parameter called" << endl;
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, int level)
    {
        cout << "Parametrized Constructor with 2 parameter called" << endl;
        // cout << "this -> " << this << endl;
        this->level = level;
        this->health = health;
    }
};
int main()
{
    cout << endl;
    // Statically Created object
    // It will call default constructor as no parameter is passed
    Hero ram;
    cout << endl;

    // It will call parametrized constructor as 1 parameter is passed
    Hero laxman(20);
    cout << "Address of laxman is : " << &laxman << endl;
    cout << "Health is : " << laxman.getHealth() << endl;
    cout << endl;

    // Dynamically allocation of object
    // It will call default constructor as no parameter is passed
    Hero *shyam = new Hero;
    cout << endl;

    // It will call parametrized constructor with 2 parameters
    Hero *hanuman = new Hero(90, 5);
    cout << endl;
}