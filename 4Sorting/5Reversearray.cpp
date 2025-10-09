#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {43, 54, 7, 2, 1, 3, 5};

    int s = 3;
    int e = 6;
    while (s <= e)
    {

        swap(arr[s], arr[e]);

        s++;
        e--;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}