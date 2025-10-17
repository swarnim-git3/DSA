#include <iostream>
// #include <stack>
using namespace std;

class stack
{
public:
    int *arr; // it is being taken as pointer because we will edit array in further program like pushing, popping, etc.
    int top;
    int size;

    stack(int data)
    {
        size = data;
        arr = new int[size]; // this is dynamic initilization
        top = -1;
    }
    void push(int a)
    {
        if (top >= size - 1)
        {
            cout << "the stack is full or stack overflow" << endl;
        }

        else
        {
            top++;
            arr[top] = a; // the element is being entered
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            cout << "The element is present" << endl;
            top--;
        }
        else
        {
            cout << "Khali hai bhadwe" << endl;
        }
    }

    int topi()
    {
        if (top >= 0)
        {
            cout << "The top most element in a array is " << arr[top] << endl;
            return arr[top];
        }
        else
        {
            return 0;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            cout << "The array is empty" << endl;
            return true;
        }
        else
            return false;
    }
};

int main()
{

    // BY USING STL                  <<<< this will use stack header class i.e.     # include <stack>
    /*  stack<int> s;
      s.push(2);
      s.push(5);
      cout << "size of stack is" << s.size() << endl;
      s.pop();
      cout << "Printing top element " << s.top() << endl;

      if (s.empty())
      {
          cout << "stack is empty" << endl;
      }
      else
          cout << "stack is empty" << endl;

      */

    stack a1(5);

    a1.push(1);
    a1.push(2);
    a1.push(7);
    a1.push(8);
    a1.topi();
    a1.push(8);
    // a1.pop();
    a1.topi();

    if (a1.isempty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}