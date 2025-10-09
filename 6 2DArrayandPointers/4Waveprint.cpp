#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    cout << "Enter the 2 D array ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The  array before wave printing " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The  array after wave printing " << endl;
    for (int j = 0; j < 3; j++)
    {

        if (j % 2 == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][j] << " ";
            }

            // cout << endl;
        }
        else
        {
            for (int i = 2; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
            // cout << endl;
        }
    }

    return 0;
}