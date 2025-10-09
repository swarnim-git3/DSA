#include <iostream>
using namespace std;

int ans(int key)
{
    int size = key;
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int a[size + 1];
    for (int i = 0; i <= size; i++)
    {
        a[i] = i;
    }
   // cout << "the array is ";
    // for (int i = 0; i <= size; i++)
    // {
    //     cout << a[i] << endl;
    // }

    int store = 0;

    while (start <= end)   //Yaha pe equal lagana bhool raha tha mai
    {
        if (a[mid] * a[mid] > key)
        {

            end = mid - 1;
        }
        else if (a[mid] * a[mid] < key)
        {

            store = a[mid];
            start = mid + 1;
        }
        else
        {

            return a[mid];
        }
        mid = start + (end - start) / 2;
    }

    return store;
}

int main()
{

    int c = ans(144);
    cout << "The square root is" << endl;
    cout << c;
    return 0;
}