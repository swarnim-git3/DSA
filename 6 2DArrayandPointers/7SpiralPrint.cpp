#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "The  array before spiral printing " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "the array after spiral Print" << endl;
    int count = 0;

    int startrow = 0;
    int startcol = 0;
    int endrow = 2;
    int endcol = 2;
    int index;

    while (count < 9)
    {
        // for printing starting row
        for (index = startcol; count < 9 && index <= endcol; index++)
        {
            cout << arr[startrow][index]<<" ";
            count++;
        }
        startrow++;

        // for printing ending column
        for (index = startrow; count < 9 && index <= endrow; index++)
        {
            cout << arr[index][endcol]<<" ";
            count++;
        }
        endcol--;

        // for printing ending row
        for (index = endcol; count < 9 && index >= startcol; index--)
        {
            cout << arr[endrow][index]<<" ";
            count++;
        }
        endrow--;

        // for printing starting column
        for (index = endrow; count < 9 && index >= startrow; index--)
        {
            cout << arr[index][startcol]<<" ";
            count++;
        }
        startcol++;
    }

    return 0;
}