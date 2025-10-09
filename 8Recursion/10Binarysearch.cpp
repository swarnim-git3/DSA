// T.C. == O(logn)
//S.C. ==O(logn)
#include <iostream>
using namespace std;

bool binary(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (arr[mid]==key)
    {
        return true;
    }
    if (s > e)
    {
        return false;
    }

    if (arr[mid] < key)
    {
        return binary(arr, mid + 1, e, key);
    }
    else if (arr[mid] > key)
    {
        return binary(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    if (binary(arr, 0, 4, 5))
    {
        cout << "found";
    }
    else
    {
        cout << "not found " << endl;
    }

    return 0;
}