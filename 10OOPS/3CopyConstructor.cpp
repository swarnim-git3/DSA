#include <iostream>
using namespace std;

class hero

{
private:
    int health;

public:
    char level;
    char *name;
//default constructor
    hero()             /// this follows shallow copy 
    {
        cout << "default constructor" << endl;
        name = new char[100];
    }
    hero(int s, char ch)
    {
        health = s;
        level = ch;
    }

    // Copy Constructor
    hero(hero &temp) // this folllow deep copy which means it will assign a new memory to the value to avoid any eror
    {
        cout << "copy called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()

    {
        cout << "Health is " << this->health << endl;
        cout << "Level is " << level << endl;
        cout << "Name is " << this->name << endl;
    }

    void sethealth(int h)

    {
        health = h;
    }
    void setlevel(int l)

    {
        level = l;
    }
    void setname(char n[])

    {
        name = n;
    }
};

int main()
{

    hero h1;
    h1.sethealth(80);
    h1.setlevel('A');
    char name[7] = "babbar";
    h1.setname(name);
    h1.print();

    hero suresh(70, 'C');
    suresh.print();

    // Copy Constructor
    hero ritesh(suresh);
    ritesh.print();
    return 0;
}