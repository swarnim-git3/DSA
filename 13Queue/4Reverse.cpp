#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// by normal recursion
void reverse(queue<int> &arr)
{

    if (arr.empty())
    {
        return;
    }

    int frontele = arr.front();
    arr.pop();
    reverse(arr);

    arr.push(frontele);
}
// by the help of stack
void reverse2(queue<int> &temp)
{
    stack<int> copy;
    while (!temp.empty())
    {
        int a = temp.front();
        temp.pop();
        copy.push(a);
    }
    while (!copy.empty())
    {
        int a = copy.top();
        copy.pop();
        temp.push(a);
    }
}

int main()
{
    queue<int> arr;
    arr.push(1);
    arr.push(4);
    arr.push(5);
    arr.push(6);
    arr.push(7);
    reverse(arr);

    cout << "the reversed queue is " << endl;
    while (!arr.empty())
    {

        cout << arr.front() << " ";
        arr.pop();
    }

    // althought after the reverse2 the code will not print anything because the arr is empty but it works finr as shyt
    reverse2(arr);

    cout << "the reversed queue is " << endl;
    while (!arr.empty())
    {

        cout << arr.front() << " ";
        arr.pop();
    }
    return 0;
}