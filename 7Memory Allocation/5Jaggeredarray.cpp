#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the rows of the array" << endl;
    cin >> row;
    int **jaggy = new int *[row];
    int *col = new int[row]; // creating the array that has to be inserted in rows
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the columns for " << i << "th row" << endl;
        cin >> col[i];              // taking the size of columns
        jaggy[i] = new int[col[i]]; // inserting array in a array

        cout << "enter the " << col[i] << " elements for row " << i << " " << endl;

        for (int j = 0; j < col[i]; j++)
        {
            cin >> jaggy[i][j];
        }
    }
    // printing the jaggered array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)

        {
            cout << jaggy[i][j];
        }
        cout << endl;
    }

    // deleting the dynamic array
    for (int i = 0; i < row; i++)

    {
        delete[] jaggy[i];
    }
    delete[] jaggy;
    delete[] col;

    return 0;
}