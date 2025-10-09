// these are used to reduce the function calls overhead
// reduces the time when a function is called many times by pasting that function there
// no extra memory usage
// Inline banta hai less than 3 lines k liye
#include <iostream>
using namespace std;

inline int hill(int &a, int &b)
{

    return (a < b) ? a : b;
}
int main()
{
    int a = 6;
    int b = 3;
    int ans = hill(a, b);

    return 0;
}