#include <bits/stdc++.h>
using namespace std;
class Hero
{
public:
    int health;
    int level;

    // GETTER
    int getHealth()
    {
        return health;
    }

    // SETTER
    void setHealth(int h)
    {
        health = h;
    }

    // PRINT FUNCTION
    void print()
    {
        cout << "health : " << this->health << endl;
        cout << "level : " << this->level << endl;
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

    // COPY CONSTRUCTOR
    Hero(Hero &ram)
    {
        cout << "Copy Constructor called" << endl;
        this->level = ram.level;
        this->health = ram.health;
    }

    // Default copy constructor do shallow copy-->present only one copy. Change in one copy will also change the other.

    // Copy constructor made by us do deep copy-->Two copies are made.Change in one copy will not change the other.
};
int main()
{
    Hero Ram(100, 4);
    Ram.print();

    Hero Shyam(Ram);
    Shyam.print();
}