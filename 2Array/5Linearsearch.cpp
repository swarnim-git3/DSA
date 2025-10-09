#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)

{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
       
    }
    return 0;
}

int main()
{
    int arr[10] = {13, 6, 465, 79, 45, 685, 23, 91, 75, 45};
    bool found = search(arr, 10, 65);
    if (found) // when the condition in if is 0 then if will not run
    {
        cout << "we found key";
    }
    else
    {
        cout << "key not found ";
    }
    return 0;
}