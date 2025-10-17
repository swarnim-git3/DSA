#include <iostream>
using namespace std;

class doubly
{

    int *arr;
    int dfront;
    int rear;
    int size;

public:
    doubly(int size)
    {
        this->size = size;
        arr = new int[size];
        dfront = -1;
        rear = -1;
    }

    int push(int data)
    {
        if (dfront == 0 && rear == size - 1 || rear == (dfront - 1) % (size - 1))
        {
            return -1;
        }
        else if (dfront == -1 && rear == -1)
        {
            rear = dfront = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && dfront != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
        return 1;
    }

    int pop()
    {
        if (dfront == -1)
        {
            return -1;
        }

        else if (dfront == size - 1)

        {
            dfront = 0;
        }
        // int ans = arr[dfront];
        else if (dfront == rear)
        {
            dfront = rear = -1;
        }
        else
        {
            dfront++;
        }
    }
    int top()
    {
    }

    bool isempty()
    {
    }
};

int main()
{

    return 0;
}