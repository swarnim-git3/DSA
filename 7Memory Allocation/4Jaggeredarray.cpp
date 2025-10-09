#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the rows a of a jaggered array" << endl;
    cin >> row;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[i];
    }

    // entering array
    cout << "Enter the array " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing array
    cout << "The array is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)

    {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}