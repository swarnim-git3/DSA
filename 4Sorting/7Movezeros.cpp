//Leetcode 283

//Not written in copy

#include <iostream>



using namespace std;

void reorder(int arr[], int m)
{

    int k = 0;

    for (int i = 0; i < m;i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[k]);
            k++;
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {3, 0, 0, 5, 7, 0, 0};

    reorder(arr, 7);

    return 0;
}

