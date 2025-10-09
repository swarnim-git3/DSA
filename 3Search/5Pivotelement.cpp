//PIVOT ELEMENT <<      Vo element kisii sorted array me jaha se value change ho jaye  EX<<   int c[7] = {11, 12,13, 6, 8, 9, 10};
#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
            cout<<"hello";
        }
        mid = (start + end) / 2;
    }
    return end;
}
int main()
{
    int c[7] = {11, 12,13, 6, 8, 9, 10};

    int a = pivot(c, 7);
    cout<<"the pivot element is ";
    cout << a << endl;

    return 0;
}