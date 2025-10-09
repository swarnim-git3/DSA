#include <iostream>
using namespace std;

void say(int n)
{
    if (n == 0)
        return;

        string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int ans = (n % 10);
    say(n / 10);
    cout << arr[ans]<<" ";
    // return anns;
}

int main()
{
    int a = 321;
    say(a);
    return 0;
}