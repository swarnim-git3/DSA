#include <iostream>
using namespace std;

void reverse(string &arr, int s = 0)
{
    
    if (s >= arr.length() - s - 1) // base case
    {
        return;
    }

    swap(arr[s], arr[arr.length() - s - 1]);
    reverse(arr, s + 1);
}

int main()
{
    string ap = "abcde";
    reverse(ap);
    cout << ap;
    return 0;
}
