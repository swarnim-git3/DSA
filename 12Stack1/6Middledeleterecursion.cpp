#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &input, int count, int size)
{

    if (count == size/2)              //abe saale half to kroge na 
    {
        input.pop();
        return;
    }
    int num = input.top();
    input.pop();

    // Recursive call
    solve(input, count + 1, size);

    input.push(num);
}

void deletemiddle(stack<int> &input, int size)
{
    int count=0;
    solve(input,count ,size);
    
}

int main()
{
stack<int > hill;
hill.push(1);
hill.push(2);
hill.push(3);
hill.push(4);
deletemiddle(hill,4);
cout<<hill.top();
hill.pop();
cout<<hill.top();
hill.pop();
cout<<hill.top();
hill.pop();
// cout<<hill.top();
// hill.pop();
// cout<<hill.top();

    return 0;
}