#include <iostream>
#include<algorithm>//used for sort function

using namespace std;

int target(int arr[], int size, int targetvalue)
{
    int a, b;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] + arr[j] == targetvalue)
            {
                a=min(arr[i],arr[j]);
                b=max(arr[i],arr[j]);
              // sort(a,b);
                cout<<"the array at index is "<<a<<" and "<< b<<endl;
            }
        }
    }

    
   // return a;
   
}
int main()
{int c[6]={2,-2,3,-3,3,-23};

target(c,6,0);

cout<<endl;



    return 0;
}