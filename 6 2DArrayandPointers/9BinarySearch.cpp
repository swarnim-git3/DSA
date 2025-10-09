#include <iostream>
using namespace std;

bool searchiing(int arr[4][4], int target)
{
    int s = 0;
    int e = 15;         //assume it as a linear array and then calculate the end
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (arr[mid / 4][mid % 4] == target)
        {
            return true;
        }
        if (arr[mid / 4][mid % 4] > target)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

cout<<searchiing(arr,16);

    return 0;
}