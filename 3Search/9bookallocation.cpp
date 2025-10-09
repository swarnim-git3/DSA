//       ISKO SOLVE KRNA HAI HUA NHI HAI ABHI




// Each student gets atleast one book
// Each book dhould be alloted to a stufent
// Boook allocation should be in contigous manner
// you have to allocate the book to 'm' students such that the maximun number of pages assigned to asudent is minimum

#include <iostream>
using namespace std;
bool check(int array[], int n, int m, int midd)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)

    {
        if (pagesum + array[i] <= midd)
        {
            pagesum += array[i];
        }
        else
        {
            studentcount++;
            if (studentcount>m || array[i]>midd)
            {
                return false;
            }
            pagesum=array[i];
        }
    }
    return true;
}
int book(int arr[], int size, int n, int m) // n=no of books   m=no of students
{
    int sum = 0;
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (check(arr, n, m, mid)) // Tum kisi function me value daal rhe ho to tum variable ka datatype nhi likhoge

        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
int a[5]={10,20,30,40,50};
//int student=2;
//int books =5;
int c=book(a,5,5,2);
cout<<c;
    return 0;
}