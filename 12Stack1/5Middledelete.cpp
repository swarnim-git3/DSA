#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> a;

    stack<int> b;
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);

    int size = a.size();
    size = size / 2;

    for (int i = 0; i <= size; i++)
    {

        if (size == i)
        {
            a.pop();
        }
        b.push(a.top());
        a.pop();
    }

    for (int i = 0; i <= size; i++)
    {
        while (!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
    }
    cout << a.top()<<" ";
    a.pop();
    cout << a.top()<<" ";
    a.pop();
    cout << a.top()<<" ";
    a.pop();
    cout << a.top()<<" ";
    return 0;
}