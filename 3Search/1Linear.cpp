#include <iostream>
using namespace std;
// linear search checks the whole array one by one and stops when found it or returns not found
// can work for sorted or non sorted array
// time complexity is O(n)
int linear(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)

    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[6] = {42, 65, 21, 76, 987, 2};
    int search = 76;

    int a = linear(array, 6, search);
    cout << "the array is found at index " << a << endl;
    return 0;
}