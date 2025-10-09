#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    char leve;

    hero()
    {
        cout << "Constructor called" << endl; // without printing it will print it because constructor is invoked automatically when object is created
    }

    hero(int health)
    {
        cout << this << endl;
        this->health = health; // by using this we eliminate the confusion and put the value of health in private health
    } // <<<this>>>   will store the address of the corresponding variable
};

int main()
{
    hero ramu(10);
    cout << "address of ramesh " << &ramu << endl;        //this and &ramu will print the same address

    return 0;
}