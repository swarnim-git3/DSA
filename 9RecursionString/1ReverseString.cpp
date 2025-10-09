#include <iostream>
using namespace std;

void reverse(string &arr, int s, int e)
{

    if (s > e)
    {
        return;
    }

    if (s < e)
    {
        swap(arr[s], arr[e]);

        reverse(arr, s + 1, e - 1);
        // cout<<arr;
    }
}

// a function with less space complexity
void reverse2(string &arr, int s = 0)
{
    
    if (s >= arr.length() - s - 1) // base case                                     //Nice
    {
        return;
    }

    swap(arr[s], arr[arr.length() - s - 1]);
    reverse2(arr, s + 1);
}

int main()
{
    string ap = "abcde";

    reverse(ap, 0, ap.length() - 1);
    cout << ap;
    return 0;
}