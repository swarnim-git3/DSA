#include <iostream>
using namespace std;

int largest(int arr[][3], int m, int n)
{

    int count = 0;
    int k;
    int row=0;

    for (int i = 0; i < m; i++)
    {
        k = 0;
        for (int j = 0; j < n; j++)
        {
            k += arr[i][j];
        }

        if (k > count)
        {
            row=i;
            count = k;
        }
    }
    cout << "The row which have the largest sum is " << row<<endl;
    cout << "The largest sum in rows is " << count<<endl;
}

int main()
{
 int arr[3][3] = {{23, 3554, 45}, {34, 5432, 65}, {76, 54, 342}};
  largest(arr, 3, 3);
    return 0;
}