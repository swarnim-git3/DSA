#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3][4];

    cout << "Enter the 2 D array ";

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The  array is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}