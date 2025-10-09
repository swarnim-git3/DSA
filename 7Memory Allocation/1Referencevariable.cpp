#include <iostream>
using namespace std;
void update1(int n)
{

    n++;
}
void update2(int &n) // passing the value by reference
{

    n++;
}
int& fun(int n) //this gives warning br=ecause these alll are local variables and they dont havr any scope outside the function
{
    int a = n;
    int &p = a;
    return p;
}
int main()
{
    int i = 5;
    int &j = i; // this is reference variable

    j++;

    cout << i << " " << j << endl;
    cout << &i << " " << &j << endl;

    cout << "Before calling the normal function " << i << endl;
    update1(i);
    cout << "After calling the normalfunction " << i << endl;

    cout << "Before passsing the value by reference " << i << endl;
    update2(i);
    cout << "After passing the value by reference" << i << endl;


    fun(i);
        return 0;
}
