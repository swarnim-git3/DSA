#include <iostream>
#include <stack>
using namespace std;

class special
{

    stack<int> s;
    int mini;

public:
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                mini = 2 * data - mini;
                s.push(mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()

    {

        if (s.empty())
        {
            return -1;
        }

        int curr = s.top();
        s.pop();
        if (curr < mini)
        {
            int prevmin = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevmin;
        }

        else
        {
            return curr;
        }
    }

    int top()

    {
        if (s.empty())
        {
            return -1;
        }

        int curr = s.top();
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    int getmin()
    {
        if (s.empty())
        {
            return -1;
        }

        return mini;
    }
};

int main()
{
    int arr[5] = {4, 3, 8, 2, 5};
    special a1;

    for (int i = 0; i < 5; i++)
    {
        a1.push(arr[i]);
        cout << "Pushed " << arr[i] << " , Current Min " << a1.getmin() << endl;
    }
    cout << "Now popping the elements" << endl;

    while (true)
    {
        int val = a1.pop();
        if (val == -1)
        {
            break;
        }
        cout << "Popped: " << val << ", ";
        cout << "New Min: " << a1.getmin() << endl;
    }

    return 0;
}