#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of 2 D array" << endl;

    int row;
    cin >> row;
    int col;
    cin >> col;
    int **ar = new int *[row];

    // creating 2D array
    for (int i = 0; i < row; i++)
    {
        ar[i] = new int[col];
    }

    // entering 2D array
    cout << "enter the array " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ar[i][j];
        }
    }

    // printing 2D array
    cout << "the output is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] ar[i];  //ye array ke andar vali array kahli krega 
    }

    delete[] ar; //ye bahar vali array khali krega
    return 0;
}