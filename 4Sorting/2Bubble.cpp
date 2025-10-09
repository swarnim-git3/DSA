//  Time complecxity is O(n^2) in worst case
//  Time complecxity is O(n) in best case

// This code can be optimized

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value" << endl;

    cin >> n;

    int arr[n];
    cout << "enter the aray" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << " the array before sorting  is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // LOGIC

    for (int i = n - 1; i > 0; i--)     // yaha p i>=0 is liye nmhi likha hai kyuki last element to apmne aap sorted hoga
    {
        bool swapped = false;           // this is for optimization
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)           //checking for optimization
        {
            break;
        }
    }

    cout << " the array after sorting  is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}