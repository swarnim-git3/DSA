// HOLD

#include <iostream>
using namespace std;

int main()
{
    int i = 4;
    int j = 2;
    int arr1[i] = {9, 9, 9, 9};
    int arr2[j] = {9, 9};

    int carry = 0;
    int sum = 0;
    int n = 5;
    // int store=n;

    int arr[n];
    // n = sizeof(arr) / sizeof(int);
    int store = n;
    i--;
    j--;
    n--;

    while (i >= 0 && j >= 0)

    {
        int temp1 = arr1[i];
        int temp2 = arr2[j];
        sum = temp1 + temp2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[n] = sum;
        n--;
        i--;
        j--;
    }
    // Left over this int arr1[i] = {9,9,9,9}; array
    while (i >= 0)
    {

        sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[n] = sum;
        n--;
        i--;
    }
    // Left over this  int arr2[j] = {9, 9}; array
    while (j >= 0)
    {

        sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[n] = sum;
        n--;
        j--;
    }
    // If carry is generated
    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[n] = sum;
        n--;
    }
    // Printing
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}