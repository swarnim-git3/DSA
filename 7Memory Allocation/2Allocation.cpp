#include <iostream>
using namespace std;

int gsum (int* arra,int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=arra[i];
}
return sum;


}

int main()
{
    int* arr = new int[5]; //(new int) creates a memory in heap and is called dynamic memory allocation
                           //(int *arr) creates a memory in stack and is called static memory aloocation

    int n;
    cout << "Enter the size of array" << endl;

    cin >> n;
    int *array = new int[n];
    cout << "Now enter the array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
cout<<"the sum of the array is"<<endl;
int b=gsum(array,n);
cout<<b;    
return 0;
}