#include <iostream>
using namespace std;
class hero
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(hero &hill)    // this is overloading 
    {
        int val1 = this->a;
        int val2 = hill.a;
        cout << "output is " << val2 - val1 << endl;
    }

    void operator()()                // this is overloading 
     {
        cout << "mai hu bracket " << this->a << endl;
    }
};

int main()
{
    hero h1, h2;
    h1.a = 8;
    h2.a = 4;
    h1 + h2;


    h1();

    return 0;
}


// Run time polymorphism depends on inheritance i.e. uf we do not inherited the classs then we cannot perform run time polymorphism 