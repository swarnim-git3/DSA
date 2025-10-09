
#include <iostream>
using namespace std;

int peakme(int arr[], int size)

{
    int peak;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // there is no use of this formula beacause i am updating mid by only one
                                         // the mid is being updated like as in linear search

    while (start <= end)
    {
        if (arr[mid] < arr[mid + 1])

        {
            cout << "firstme" << endl;
            peak = arr[mid + 1];
            mid++;
        }
        else if (arr[mid - 1] > arr[mid])

        {
            cout << "secondme" << endl;
            peak = arr[mid - 1];
            mid--;
        }

        else
        {
            peak = arr[mid];
            return peak;
        }
    }
}

int peakbabbar(int arr[], int size)

{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])

        {
            cout << "first" << endl;

            start = mid + 1;
        }

        else
        {
            cout << "second" << endl;
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}

int main()
{
    int a[20] = {0, 1, 1, 1, 1, 3, 4, 5, 6, 7, 8, 10, 11, 18, 26, 34, 43, 2, 1, 0};
    int b = peakme(a, 20);
    cout << "the peak element is " << b << endl;
    int c = peakbabbar(a, 20);
    cout << "the peak element is " << c << endl;

    return 0;
}