#include <iostream>
using namespace std;

class hero

{
private:
    int health;

public:
    char level;
    char *name;

    // static keyword
    static int timetocomplete;
    // default constructor
    hero() /// this follows shallow copy
    {
        cout << "default constructor" << endl;
        name = new char[100];
    }
    // destructor
    ~hero()

    {
        cout << "destructor bhai aagya" << endl;
    }
};
// static keyword
int hero::timetocomplete = 7; // it can be accessed without object creation
int main()
{
    cout << hero::timetocomplete << endl;
    return 0;
}

// it clears the memory before ending of program