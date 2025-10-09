//  Time complecxity is O(n^2) in worst case
//  Time complecxity is O(n) in best case

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    int array[7];
    // int temp = arr[0];

    for (int i = 1; i < 7; i++)
    { 
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j+1] = arr[j];
            }

            else
            {
                break;
            }
        }

        arr[j+1] = temp;
    }

    for (int i = 0; i < 7; i++)

    {
        cout << arr[i];
    }

    return 0;
}