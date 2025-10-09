#include <iostream>
using namespace std;

class animal
{

public:
    void speak()

    {
        cout << "speaking " << endl;
    }
};

class dog : public animal
{

public:
    void speak()

    {
        cout << "barking " << endl;
    }
};
class cow : public animal
{

public:
    void speak()

    {
        cout << "Meow " << endl;
    }
};

int main()
{
dog a1;
cow a2;

a1.speak();
a2.speak();


    return 0;
}