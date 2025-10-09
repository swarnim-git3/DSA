// Space complexity is O(1)
// Time complexity is   (n-1),(n-2),.....1 =   (n^2-n)/2 Therefore the compexity is O(n^2)
// Best case and worst case both me same rhegi Time Complexity
//  When to use     <<  Small size of array  , memory kam hai

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
    cout << "The array before sorting  is " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Logic
    for (int i = 0; i < n - 1; i++) // agar array ka size n hai to loop n-1 tk chalega (last element to sorted hi hoga)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++) // 2 loop isiliye lage hai kyuki pehli postion k liye run krega poora lop then dusri position k liye
        {
            if (arr[j] > arr[minindex]) // we are finding the smallest element in the array
                minindex = j;           // very good step   <<This is one of the main step
        }
        swap(arr[minindex], arr[i]); // swapping the smallest element with the i'th position   (minindex have the smallest element)
        cout << "Array during sorting is ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << "The array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
     
}

// selection sort can not be optimized because there can come a case in which there may not be swapping but the array is not sorted
// EX {3,5,1,7,2}
// Array is                4 1 2 5 4
// Array during sorting is 1 4 2 5 4
// Array during sorting is 1 2 4 5 4
// Array during sorting is 1 2 4 5 4
// Array during sorting is 1 2 4 4 5