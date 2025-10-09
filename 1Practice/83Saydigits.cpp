#include <iostream>
using namespace std;

// int digits(int num)
// {
//     if (num == 0)
//         return;

//     int temp = num;
//     return temp;
// }
void say(int n)
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0)
        return;

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