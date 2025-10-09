#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int temp;
    int count = 1;
    for (int i = 0; i < (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - count];
        arr[size - count] = temp;
        count++;
    }

    cout << "the aray after reverssal is " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// through swap function
int swap(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "the revarsal array after swapping through swap function is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[5] = {43, 123, 4, 86, 45};
    int arra[5] = {3, 12, 4, 8, 4};

    cout << " Before reversal is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    reverse(array, 5);




    cout << "2nd array Before reversal is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arra[i] << " ";
    }
    cout << endl;
    swap(arra, 5);

    return 0;
}