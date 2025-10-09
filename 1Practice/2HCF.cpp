#include <iostream>
using namespace std;
int HCF(int a, int b)

{

    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    return a;
}

int main()
{
int a=100;
int b=0;
cout<<HCF(a,b);
    return 0;
}