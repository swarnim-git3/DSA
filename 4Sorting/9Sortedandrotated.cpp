// Leetcode 1752

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {55,56,57,58,40};
    int count = 0;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[0] < arr[4])
    {
        count++;
    }

   
        if (count <= 1)
        {
            cout << "The array is sorted and roatated";
        }
        else
        {
            cout << "array is not sorted or rotated";
        }

    
    return 0;
}