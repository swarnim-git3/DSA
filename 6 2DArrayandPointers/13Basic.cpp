#include <iostream>
using namespace std;

int hell(int *q)
{

    cout << *q << endl; // this prints value
    cout << q << endl;  // this prints address
}

void update(int *p)

{

    //  p = p + 1;
    // cout<<*p<<endl;//this will not update real value

    *p = *p + 1;
    cout << *p << endl; // this will update real value
}

int getsum(int arr[], int n)     // this will pass the pointer of arr OR    <<<< (int arr[],int n) = (int *arr, int n)>>>>
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
    }
    return sum;
}

int main()
{

    int a = 5;
    int *p = &a;
    hell(p);

    cout << "before " << p << endl;
    update(p);
    cout << "after " << p << endl;



    return 0;
}