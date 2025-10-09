#include <iostream>
using namespace std;
int series(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = series(n - 1) + series(n - 2);
    return (ans);
}

int main()
{
    int a = 6;
    cout<<series(a);

    return 0;
}

//T.C. == O(2^n)
//S.C. ==O(n)