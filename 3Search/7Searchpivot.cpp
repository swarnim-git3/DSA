
//This method is done by babbar

//In this first we find pivot and then find do the binary search accorfing to it
#include <iostream>

using namespace std;
int pivot(int arr[], int size)

{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int binarysearch(int array[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (array[m] < key)
        {
            s = m + 1;
        }
        else if (array[m] > key)
        {
            e = m - 1;
        }
        else if (array[m] == key)
        {
            return m;
        }
        else
        {
            return -1;
        }
        m = s + (e - s) / 2;
    }
}

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int c = binarysearch(a, 7, 3);
    cout << c;

    return 0;
}