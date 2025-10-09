// This is done by me 
//Isme poora ek hi function me complete kiya hai 
//Pehle pivot nikala hai phir binary search lagaya hai
#include <iostream>
using namespace std;

int search(int arr[], int size,int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int temp;

    while (start < end)
    {

        if (arr[mid] >= arr[0])

        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    temp=start;
    cout<<"the pivott is at  "<<temp<<endl;;


    if (arr[0] <= key)

    {
        start = 0;
        end = temp-1;
        mid = (start + end) / 2;
        
        while (start < end)
        {
            if (arr[mid] >= arr[0])

            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = (start + end) / 2;
        }
        return end;
    }

    
    {
        start =temp;
        end = size - 1;
        mid = (start + end) / 2;

        while (start < end)
        {
            if (arr[mid] < key)

            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid=(start+end)/2;
        }
        return end;
    }

    else
    {
        cout << "the element is not resent";
    }
}

int main()
{
    int a[9] = {24, 25, 26, 0, 1, 3,5,6,8};
    int c = search(a, 9,1);
    cout << "the searched array is present at " << c;

    return 0;
}