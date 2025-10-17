#include <iostream>
#include <stack>
using namespace std;

void sortedinnsert(stack<int> &stack, int num)
{
    if (stack.empty() || stack.top() < num)
    {
        stack.push(num);

        return;
    }

    int n = stack.top();
    stack.pop();
    sortedinnsert(stack, num);

    stack.push(n);
}

void sortstack(stack<int> &stack)

{
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortstack(stack);

    sortedinnsert(stack, num);
}

int main()
{
    stack<int> a;
    a.push(1);
    a.push(456);
    a.push(19);
    a.push(32);
    a.push(9);
    a.push(4);
    a.push(7);
    sortstack(a);
    cout << a.top() << " ";
    a.pop();
    cout << a.top() << " ";
    a.pop();
    cout << a.top() << " ";
    a.pop();
    cout << a.top() << " ";
    a.pop();

    cout << a.top() << " ";
    a.pop();
    cout << a.top() << " ";
    a.pop();
    cout << a.top() << " ";
    a.pop();
    return 0;
}