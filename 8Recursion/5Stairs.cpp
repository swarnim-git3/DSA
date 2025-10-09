#include <iostream>
using namespace std;
int stairs(int st)

{
    if (st < 0)
        return 0;
    if (st == 0)
        return 1;
    int ans = stairs(st - 1) + stairs(st - 2)+stairs(st-3);
  
    return ans;
}

int main()
{
    int toa = 10;
   cout<< stairs(toa);
    return 0;
}