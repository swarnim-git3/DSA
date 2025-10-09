#include <iostream>
#include <algorithm>
using namespace std;

void printarray(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int sortOne(int array[], int count)
{
    int left = 0, right = count - 1;
    int step = 0;
    while (left+1 < right)
    {
        cout << " array in step " << step++<<endl;
        while (array[left] == 0)

        {
            left++;
        }
        while (array[right]== 1)

        {
            right--;
        }
        if (array[left] == 1 && array[right] == 0)
        {
            swap(array[left],array[right]);
        }
    }
    return 0;
}
int arrange(int arr[], int size)

{
    int temp;
    for (int i = 0; i < size; i++)

    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])

            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return 0;
}

int main()
{
    int c[6] = {0, 1, 0, 1, 0, 1};
    int d[10] = {0, 1, 0, 1, 0, 1, 0, 0, 0, 1};
    cout << "Array c before sorting "<<endl;
    printarray(c, 6);
    arrange(c, 6);
    cout << "Array after sorting through arrange function "<<endl;
    printarray(c, 6);
    cout << "Array d before sorting "<<endl;
    printarray(d, 10);
    sortOne(d, 10);
    cout << "Array after sorting through sortone function "<<endl;
    printarray(d, 10);
    return 0;
}