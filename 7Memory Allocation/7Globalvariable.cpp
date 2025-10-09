// global variable is a bad practice because any funciton can update its value and and the value willl change for every other function 
#include <iostream>
using namespace std;

int i = 5;

void one(int n)
{
    n = i;
    cout << " i in one function " << i << endl;
}

int main()
{
    int a = i;
    cout << "i in main function " << a << endl;
    one (i);

    return 0;
}