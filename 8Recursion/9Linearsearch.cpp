#include <iostream>
using namespace std;
bool find(int arr[], int size, int key)
{

    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
                                                                //this is also correct
    // else 
    // {
    //     int found = find(arr + 1, size - 1, key);
    //     if (found == key)
    //     {
    //         return true;
    //     }
    // }

    return find(arr + 1, size - 1, key);
}

int main()
{
    int i[5] = {2, 4, 6, 4, 1};
    int ke = 4;
    if (find(i, 5, 4))
        cout << "Found";
    else
        cout << "not found";

    return 0;
}