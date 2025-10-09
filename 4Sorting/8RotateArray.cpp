//Leetcode 189


//Not written in copy
#include <iostream>
using namespace std;

void rotate(int arr[], int k, int rot)
{
    int temp[k] = {0};
    for (int i = 0; i < k; i++)
    {
        temp[(i + rot) % k] = arr[i];
    }

    arr = temp;

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {3, 3, 45, 6, 963};

    rotate(arr, 5, 3);
    return 0;
}