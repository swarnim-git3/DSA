#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    int temp = n;
    if (temp <= 0)
    {
        cout << "the array before printing is " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        return true;
    }

    if (arr[temp] < arr[temp - 1])
    {
        swap(arr[temp], arr[temp - 1]);

        sorted(arr, temp--);
    }

    else
    {
        temp = temp - 1;
        sorted(arr+1, temp-1);
    }
}

int main()
{
    int arr[5] = {4, 32, 1, 5, 0};
    cout << sorted(arr, 5);
    return 0;
}