#include <iostream>
#include <climits> //used for **INT_MAX** and  **INT_MIN**  functions
using namespace std;

void Max(int arr1[], int size)
{
    int temp = arr1[0];

    for (int i = 1; i < size; i++)
    {
        if (arr1[i] > temp)
        {
            temp = arr1[i];
        }
    }
    cout << temp << " is max" << endl;
}

void Min(int arr1[], int size)
{
    int temp = arr1[0];

    for (int i = 1; i < size; i++)
    {
        if (arr1[i] < temp)
        {
            temp = arr1[i];
        }
    }
    cout << temp << " is min" << endl;
}

// By using pre definned function
// uses header file climits
//INT_MIN is used for finding maximun value and VICE VERSA
int MAXNUM(int arr[], int size)
{
    int maxi = INT_MIN; // used when we include climits header file
    cout<<"the value is "<<maxi<< endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "max is   " << maxi << endl;
}



int MAXNUM1(int arr[], int size)
{
    int maxi = INT_MIN; // used when we include climits header file
    for (int i = 0; i < size; i++)
    {
        maxi=max(maxi,arr[i]);   //this is max function
    }
    cout << "max is   " << maxi << endl;

}



int main()
{

    int arr[5];
    cout << "enter the array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    Max(arr, 5);

    Min(arr, 5);

    MAXNUM(arr,5);

    MAXNUM1(arr,5);


    return 0;
}