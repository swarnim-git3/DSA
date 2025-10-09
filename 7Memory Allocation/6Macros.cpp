// MACRO ---- A piece if code un a program that is replaced by the value macro

#include <iostream>

using namespace std;
#define PI 3.14   //this do not take storage 
                  //it cannot be updated 

int main()
{
    int r = 5;
    double area = PI * r * r;
    cout << area;
    return 0;
}