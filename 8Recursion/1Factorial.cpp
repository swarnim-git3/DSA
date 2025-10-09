#include <iostream>
using namespace std;

int factorial(int n)

{
    if (n == 0)
        
    return 1;    //base case is important
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "enter the number of ehich you want the factorial" << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "the factorial is " << ans;

    return 0;
}



//T.C. == O(n)
// S.C. O(N=n)