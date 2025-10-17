#include <iostream>

using namespace std;

class Queue
{

private:
  int *arr;
  int qfront;
  int rear;
  int size;

public:
  Queue(int s)

  {
    this->size = s;
    arr = new int[size]; // the size here is the parameter not the member vairable
    qfront = 0;
    rear = 0;
  }

  int push(int data)
  {
    if (rear != size)
    {
      arr[rear] = data;
      rear++;
    }
    else
    {
      return -1;
    }
  }

  int popi()
  {

    if (rear == qfront)
    {
      // rear = front = 0;     yaha nhi hoga
      return -1;
    }
    else
    {
      int ans = arr[qfront];
      arr[qfront] = -1;
      qfront++;
      if (rear == qfront)
      {
        rear = qfront = 0;
      }
      return ans;
    }
  }

  int afront()
  {
    if (qfront == rear)
    {
      return -1;
    }
    else
    {
      return arr[qfront];
    }
  }
  bool isempty()
  {
    if (rear - qfront < size)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void printQueue()
  {
    if (qfront == rear)
    {
      cout << "Queue is empty" << endl;
      return;
    }
    cout << "Queue elements: ";
    for (int i = qfront; i < rear; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};
int main()
{ // BY THE HEADER FILE

  // queue<int > s;
  // s.push(4);
  // s.push(5);
  // s.push(6);
  // cout<<s.size()<<endl;
  // cout<<s.front()<<endl;
  // s.pop();
  // cout<<s.front()<<endl;

  // IMPLEMENTATION BY ARRAY

  Queue a1(4); // create a queue of size 4

  // pushing values
  a1.push(4);
  a1.push(5);
  a1.push(6);
  a1.push(7);
  a1.popi();
  a1.push(8); // overflow

  cout << a1.afront() << endl;
  a1.printQueue();

  return 0;
}