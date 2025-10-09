#include <iostream>
using namespace std;
int sum(int ar[], int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+= ar[i];
    }
    cout << "the sum is " << sum;
}
int main()
{
    int arr[5] = {35, 84, 67, 8, 66};

    sum(arr, 5);
    return 0;
}