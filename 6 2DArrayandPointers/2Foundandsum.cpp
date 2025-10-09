#include <iostream>
using namespace std;
bool present(int arr[3][3], int target, int i, int j)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int sumrow(int arr[][3], int m, int n)
{
    int k;

    for (int i = 0; i < m; i++)
    {
        k = 0;
        for (int j = 0; j < n; j++)
        {
            k += arr[i][j];
        }
        cout << "the sum of row " << i << " is " << k << endl;
    }
}




int sumcol(int arr[][3], int m, int n)
{
    int k;

    for   (int j = 0; j < n; j++)
    {
        k = 0;
        for (int i = 0; i < m; i++)  
        {
            k += arr[i][j];
        }
        cout << "the sum of column " << j << " is " << k << endl;
    }
}

int main()
{
    int arr[3][3] = {{23, 34, 45}, {34, 54, 65}, {76, 54, 342}};
    cout << present(arr, 34, 3, 3)<<endl;

     int ar[4][3] = {{23, 34, 45}, {324, 45, 65}, {34, 23, 45},{234,54,65}};
     sumrow(ar, 4, 3);
     cout<<endl;
     sumcol(ar, 4, 3);
     

    return 0;
}