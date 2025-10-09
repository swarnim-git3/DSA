// the array got updated unlike any other datatype during calling of function i.e. the address is passed in function of an array
// yaani jb array ko pass krte hai as a parameter to jb function me jayegi tb wo change ho jayegi function ke according
#include <iostream>
using namespace std;

void update(int arr1[], int size)
{
    arr1[0] = 27; // during this process the main array will get change
    arr1[1] = 55; // during this process the main array will get change
    cout << "the array in function is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << endl;
    }
}

int main()
{
    int arr[4] = {2, 6, 29, 12};
    cout << "The array in main function is" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    update(arr, 4);

    cout << "The array in main function after changement is" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}


