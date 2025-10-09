#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)

{
    int pivot = arr[s];
    cout << "hi " << pivot << endl;

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place the pivot element to its right place
    int pivotindex = s + count;
    swap(arr[s], arr[pivotindex]);

    // left and right wala part smabhaln hai
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // partition krenge
    int p = partition(arr, s, e);

    // left part solve kro
    quicksort(arr, s, p - 1);

    // right part solve kro
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[6] = {9, 5, 4, 1, 7, 0};
   // cout << partition(arr, 0, 6);
    quicksort(arr, 0, 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}