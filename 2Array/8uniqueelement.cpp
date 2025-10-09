#include <iostream>
using namespace std;

int unique(int arr[], int size)

{

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        int temp = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (temp == arr[j])
                {
                    count++;
                }
            
        }
    }
        if (count == 1)
        {
            cout << " the numbner is  repoaeted only once is " << arr[i] << endl;
        }
    }
    return 0;
}

// Nice approach but cannot handle the 2 unique elements
int uniquexor(int arr[], int size)
{
    int a;
    for (int i = 0; i < size; i++)
    {
        a = 0;
        a = a ^ arr[i];
    }
    return a;
}

int main()
{

    int arra[] = {1,2,2,3,3,6};

    unique(arra, 6);
   cout<<"Unique element by usingn xor function is"<<endl;
    int b = uniquexor(arra, 6);
    cout << b;
    return 0;
}
