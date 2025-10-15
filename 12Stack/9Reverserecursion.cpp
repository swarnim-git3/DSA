#include <iostream>
#include <stack>

using namespace std;

void insertatbottom(stack<int> &input, int data)
{

  if (input.empty())
  {
    input.push(data);
    return;
  }
  int temp = input.top();
  input.pop();

  insertatbottom(input, data);
  input.push(temp);
}   

void reverse(stack<int> &input)
{
  if (input.empty())
  {
    return;
  }

  int top = input.top();
  input.pop();
  reverse(input);

  insertatbottom(input, top);
}

int main()
{
  stack<int> a;
  a.push(1);
  a.push(2);
  a.push(3);
  a.push(4);
  a.push(5);

  reverse(a);

  cout << a.top() << " ";
  a.pop();
  cout << a.top() << " ";
  a.pop();
  cout << a.top() << " ";
  a.pop();
  cout << a.top() << " ";
  a.pop();
  cout << a.top() << " ";
  // a.pop();
  //  cout << " this is garbage value asal me empty ho gya" << a.top() << " ";
  return 0;
}