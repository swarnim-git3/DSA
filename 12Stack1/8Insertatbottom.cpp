#include <iostream>
#include <stack>
using namespace std;

stack<int> again(stack<int> &mystack, int x) // yaha by reference hi pass krenge kyuki hume apni main stack ko change krna hai
{
    if (mystack.empty())
    {
        mystack.push(x);
        return mystack;
    }

    int num = mystack.top();
    mystack.pop();

    // recursive call to again remove element
    again(mystack, x);

    mystack.push(num);

    return mystack;
}

stack<int> bottom(stack<int> &mystack, int x)
{
    if (mystack.empty())
    {
        mystack.push(x);
    }
 
        again(mystack, x);
    
    
    return mystack;
}
int main()
{

    stack<int> str;
    str.push(1);
    str.push(3);
    str.push(2);
    bottom(str, 7);
    
    cout<<str.top()<<" ";
    str.pop();

    cout<<str.top()<<" ";
    str.pop();

    cout<<str.top()<<" ";
    str.pop();

cout<<    str.top();
    str.pop();

    return 0;
}