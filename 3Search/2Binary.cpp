#include <iostream>
using namespace std;

// In binary search the array checks only the mid value calculated according to start and end element
// in this less iterations occur in comparison to linear search
// Binary search only works on the sorted array that is the array should be either increasing or decreasing
// Time complexity is O(log n)
int binarysearch(int arr[], int size, int key)

{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // error can occur when value of start and end are too big then ( start + end ) will become very big
                                 //  to solve this error we can write mid as   << mid= start + (end-start)/2
                                 // limit of int =2^31 -1

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid]) // this code is written for ascending order array for binary search
        {
            start = mid + 1;
        }
        else

        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int c[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // this should be arranged
    int rebecca = binarysearch(c, 10, 1);

    cout << "the key element is found at index " << rebecca << endl;
    return 0;
}