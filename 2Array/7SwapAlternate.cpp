#include <iostream>
using namespace std;

// this function is for even number of elements in array
// void swapshort(int a1[], int size)

// {

//     for (int i = 0; i < size; i += 2)
//     {
//         swap(a1[i], a1[i + 1]);
//     }

//     cout << "the array after alternate swapping is " << endl;
//     for (int i = 0; i < size; i++)

//     {
//         cout << a1[i];
//     }
// }

// this function is for odd number of elements in array
// int swap1(int arr[], int size)
// {
//     int temp;
//     for (int i = 0; i < size - 2; i += 2)
//     {
//         temp = arr[i];
//         arr[i] = arr[i + 1];
//         arr[i + 1] = temp;
//     }

//     cout << "the array after alternate swapping is " << endl;
//     for (int i = 0; i < size; i++)

//     {
//         cout << arr[i];
//     }
//     cout << endl;
//     return 0;
// }

// this function can work for both even or odd

void bothevenodd(int array[], int size)
{

    for (int j = 1; j < size; j += 2)
    {
        swap(array[j - 1], array[j]);
    }

    cout << "the array after alternate swapping is " << endl;
    for (int j = 0; j < size; j++)

    {
        cout << array[j];
    }
    cout << endl;
}

int main()
{
    int arra[5] = {1, 2, 3, 4, 5};

    int ar[6] = {1, 2, 3, 4, 5, 6};

    // cout << "the array arra before reverse swapping " << endl;
    // for (int i = 0; i < 5; i++)

    // {
    //     cout << arra[i];
    // }
    // cout << endl;
    // swap1(arra, 5);
    // cout << endl;

    // cout << "the array ar before reverse swapping " << endl;
    // for (int i = 0; i < 6; i++)

    // {
    //     cout << ar[i];
    // }
    // cout << endl;
    // swapshort(ar, 6);
    // cout << endl;

    cout << "the god array before reverse swapping " << endl;
    for (int i = 0; i < 6; i++)

    {
        cout << ar[i];
    }
    cout << endl;
    bothevenodd(ar, 6);
    return 0;
}