#include <iostream>
using namespace std;

void headprint(int n)
{
    if (n == 0) // this is important
        return;

        headprint(n - 1);
        cout << n << endl;
}

void tailprint(int n)
{
    if (n == 0) // this is important
        return;

        cout << n << endl;
    tailprint(n - 1);
}

int main()
{
    int a = 5;

    cout << "Pehle processing and then recursive relation is head recursion" << endl;
    headprint(a);
    cout << "Pehle recursive relation and then processing relation is tail recursion" << endl;
    tailprint(a);

    return 0;
}