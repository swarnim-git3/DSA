#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string name = "swarnim";

    stack<char> a;
    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        a.push(ch);                        //answer eek stack me store karwa liya kyuki stack me order apne aap reverse ho jata hai
                                          // this is used as it reverses the order i.e. it follows LIFO
                                          // a me "minraws" store hoga
    }
    string ans = "";
    while (!a.empty())
    {
        char ch = a.top();
        ans.push_back(ch);          // push_back is used as it preserves the order i.e. it follows FIFO
        a.pop();
    }
    cout << ans;

    return 0;
}