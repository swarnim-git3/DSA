#include <iostream>
// #include<queue>
using namespace std;

class Deque
{

    int *arr;
    int size;
    int rear;
    int front;

public:
    Deque(int size)

    {
        this->size = size;
        arr = new int(size);
        rear = front = -1;
    }

    bool pushfront(int value) // front piche jata hai push hone k baad
    {

        if (isfull())
        {
            return false;
        }
        else if (isEmpty())
        {
            rear = front = 0;
        }
        else if (rear == size - 1 && front != 0) // front piche jata hai push hone k baad
                                                 // front aage badhega agar pop kroge
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = value;

        return true;
    }

    bool pushrear(int value)
    {

        if (isfull())
        {
            return false;
        }

        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int popfront()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) // it means that the single element is present

        {
            front = rear = -1;
        }

        else if (front == size - 1)
        {
            front = 0; // to maintain the cyclic nature
        }

        else
        {
            // normal flow
            front++;
        }
        return ans;
    }

    int poprear()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear) // it means that the single element is present

        {
            front = rear = -1;
        }

        else if (rear == 0)
        {
            rear = size - 1; // to maintain the cyclic nature
        }

        else
        {
            // normal flow
            rear--;
        }
        return ans;
    }
    int getfront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    int getrear()
    {
        if (isEmpty())
        {
            return -1;
        }

        return arr[rear];
    }
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isfull()
    {
        if (front == 0 && rear == size - 1 || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    // deque<int >d;           //we write deque for doubly ended queue

    // d.push_front(12);
    // d.push_back(123);

    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;

    // d.pop_front();

    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;
    // d.pop_back();

    // if (d.empty())
    // {
    //     cout<<"empty"<<endl;
    // }
    // else{
    //     cout<<"not"<<endl;
    // }

    return 0;
}