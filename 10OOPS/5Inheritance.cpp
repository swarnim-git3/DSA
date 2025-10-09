#include <iostream>
using namespace std;

class human
{

private:
    int height;
    int age;

public:
    int getage()
    {
        return this->age;
    }
    int getheight()
    {
        return this->height;
    }
};

class male : public human
{
public:
    string color;
    void sleep()

    {
        cout << "Male is sleeping " << endl;
    }
};

int main()
{
    male a1;
    cout << a1.getage();

    a1.sleep();
    //cout << endl;
    cout << a1.color << "hill";

    return 0;
}