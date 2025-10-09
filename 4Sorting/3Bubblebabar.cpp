//  Time complecxity is O(n^2) in worst case
//  Time complecxity is O(n) in best case
// This code can be optimized

#include <iostream>
using namespace std;

int main()

{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "now enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the array before sorting is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "the array during sorting is " << endl;

    // LOGIC
    for (int i = 1; i < n; i++)
    {
        bool swapped = false; // this is for optimization
        for (int j = 0; j < n - i; j++)

        {
            if (arr[j] < arr[j + 1])

            {
                swap(arr[j], arr[j + 1]);
                                                                                    // checking
                                                                                    for (int i = 0; i < n; i++)
                                                                                    {
                                                                                        cout << arr[i] << " ";
                                                                                    }
                                                                                    cout << endl;

                                                                                    // checking done
                swapped = true;
            }
        }

        if (swapped == false) // checking for optimization
        {
            break;
        }
    }

    cout << "the array after sorting is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "again" << endl;
    cout << "the array after sorting is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}