#include <iostream>
using namespace std;

int add(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + add(arr + 1, size - 1);
    return sum;
}

int main()
{
    int a[5] = {2, 4, 2, 67, 78};
    cout << add(a, 5);

    return 0;
}