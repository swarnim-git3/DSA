#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    int temp = n;
    if (temp == 0 || temp==1)
    {

        return true;
    }
   if (arr[0] > arr[1])
    {
        
        return false;
    }

    else
    {

       bool hill= sorted(arr + 1, temp - 1);
       return hill;
    }
}

int main()
{
    int arr[5] = {0,2,2,2,2};
    int a = sorted(arr, 5);
    cout << a;
    return 0;
}