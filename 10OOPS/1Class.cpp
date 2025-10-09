#include <iostream>
using namespace std;
class hero
{
    int health;

public:
    char level;
    void print()
    {
        cout << level << endl;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h /*, string password*/) // you can also set the password     for example
    {
        /*if (password == "heeded") // by writing this condtition only person woth the poassword can access
        {*/
        health = h;
        // }
    }
    void setlevel(char l)
    {
        level = l;
    }
};
int main()
{
    hero ramesh;



    
    // // static allocation
    // hero a;
    // cout << "level is  " << a.level << endl;

    // // dynamic allocation
    // hero *b = new hero;
    // cout << "level is  " << (*b).level << endl;

    // // or
    // cout << "level is  " << b->level << endl; // naya tareeka

    // cout << "Ramesh health is " << ramesh.gethealth() << endl;
    // ramesh.sethealth(70);
    // ramesh.level = 'A';
    // cout << "Ramesh health is " << ramesh.gethealth() << endl;

    // //  cout << sizeof(ramesh); // cout<< will return 1 byte in case of  empty class
    return 0;
}