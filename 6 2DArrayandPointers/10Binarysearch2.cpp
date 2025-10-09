#include <iostream>
using namespace std;
bool search(int arr[][4], int target)
{

    int row = 4;
    int col = 4;

    int rowindex = 0;
    int colindex = 3;

    while (rowindex < row && colindex >= 0)
    {
        int element = arr[rowindex][colindex];

        if (element == target)

        {
            return 1;
        }

        if (element < target)
        { 
            rowindex++;
        }
        else
        {
            colindex--;
        }
        // element = arr[rowindex][colindex];
    }
    return 0;
}

int main()
{
    int a[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}, {4, 5, 6, 7}};
    cout << "The 2D array is: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";        
        }
        cout << endl;
    }
    cout << search(a, 9);
    return 0;
}