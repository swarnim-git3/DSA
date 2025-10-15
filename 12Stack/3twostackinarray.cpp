#include <iostream>
using namespace std;
class two

{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    two(int size)
    {
        this->size = size; // this specifies us that use the member variable so in this case the member variable is updated by the value of parameter
        arr = new int[size];
        top1 = -1;
        top2 = this->size;
    }

    void push1(int d)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = d;
        }
        else
        {
            cout << "Stack is overflow1" << endl;
        }
    }
    void push2(int d)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = d;
        }
        else
        {
            cout << "Stack is overflow2" << endl;
        }
    }
    void pop1()
    {
        if (top1 != -1)
        {
            top1--;
        }
        else
        {
            cout << "Stack is underflow  for top1" << endl;
        }
    }

    void pop2()
    {
        if (top2 != size)
        {
            top2++;
        }
        else
        {

            cout << "Stack is underflow for top2" << endl;
        }
    }

    int top11()
    {
        if (top2 - top1 >= 1)
        {
            return arr[top1];
        }
        else
        {
            return -1;
        }
    }

    int top22()
    {
        if (top2 - top1 >= 1)
        {
            return arr[top2];
        }
        else
        {
            return -1;
        }
    }
    bool isempty()
    {
        if (top2 - top1 > 1)
        {
            cout << "array is empty" << endl;
            return true;
        }
        else
        {
            cout << "it is full" << endl;
        }
    }
};

int main()
{
    two a1(2);
    a1.push1(5);
    a1.push1(6);

    //a1.pop1();
    cout << a1.top11()<<endl;
    a1.isempty();
    return 0;
}