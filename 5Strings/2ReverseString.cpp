#include <iostream>
#include <string.h>
using namespace std;

int reverse(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)

    {

        swap(arr[s++], arr[e--]);
    }
    return 0;
}

int main()
{
    char S[] = "wertyu";
    reverse(S, 6);

    cout<<S;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << S[i];
    // }

    return 0;
}