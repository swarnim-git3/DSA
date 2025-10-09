                                             // Leetcode 88
#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int merge(int arr1[], int m, int arr2[], int n, int arr3[])
{

    int k = 0;
    int i = 0;
    int j = 0;
    while (i < m && j < n)                   // this condition of while is for putting the minimum values in arr3
    {
        if (arr1[i] < arr2[j])

        {
            arr3[k] = arr1[i];

            i++;
        }

        else
        {
            arr3[k] = arr2[j];

            j++;
        }
        k++;
    }

    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    return 0;
}

int main()
{
    int arr1[7] = {2, 4, 7, 8, 9, 99, 100};
    int arr2[4] = {2, 45, 67, 88};
    int arr3[11] = {0};

    merge(arr1, 7, arr2, 4, arr3);
    print(arr3, 11);

    return 0;
}