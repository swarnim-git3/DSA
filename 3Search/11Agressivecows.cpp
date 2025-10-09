#include <climits>
#include <iostream>
using namespace std;

int maxmin(int arr[], int size)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    int largest = maxi - mini;
    return largest;
}


bool ifpossible(int array[],int cow,int mid)
{

}


int place(int arr[], int size, int cow)
{
    int s = 0;
    int e = maxmin(arr, size);
    int mid = s + (e - s) / 2;
    int temp = 0;
    while (s <= e)

    {
        if (ifpossible(arr, cow, mid))
        {
            temp = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return temp;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 6};
    int c = place(a, 5, 2);
    cout << c;
    return 0;
}