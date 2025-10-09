#include <iostream>
using namespace std;

void start(int arr[], int size, int star = 0)   //this is default document
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    start(arr, 6);
    return 0;
}