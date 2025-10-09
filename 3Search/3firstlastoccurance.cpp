#include <iostream>
using namespace std;
// by linear search or my method
// int firstposition(int arr[], int size, int key)

// {
//     for (int i = 0; i < size; i++)
//     {
//         if (key == arr[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int lastposition(int arr[], int size, int key)
// {
//     for (int i = size - 1; i >= 0; i--)
//     {
//         if (key == arr[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// by binary search or mind bloging method
int first(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int temp = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            temp = mid;
            end = mid - 1;
            // return temp;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // i forgot this condition which is necessary as we have to update the mid in order to work further
    }
    return temp;
}

int last(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int temp = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            temp = mid;
            start = mid + 1; //?? have to check later why it stops working when (start = mid-1)
                             // ANSWER --the values of start and mid will stuck and will not change after particular condition that is why further comparision will stop and program will run infinitely and output will not be obtained

            // return temp;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // i forgot this condotion which is necessary as we have to update the mid in order to work further
    }
    return temp;
}

int main()
{
    int c[6] = {0, 1, 1, 1, 1, 6};
    cout << "  fgd";
    int a = first(c, 6, 1);
    int b = last(c, 6, 1);

    cout << "the first position of key element in the array is  " << a << endl;
    cout << "the last position of key element in the array is  " << b << endl;

    return 0;
}