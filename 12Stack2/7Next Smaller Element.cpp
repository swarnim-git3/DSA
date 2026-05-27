// find the very next smaller element in a array
// understand this question befor 6th of stack2
#include <stack>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nextsmallerelement(vector<int> arr, int n)
{
    stack<int> a;
    a.push(-1);                       // negative push krke rkhna hai taaki pata chale kb khali hua
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {

        int curr = arr[i];
        while (a.top() >= curr)
        {
            a.pop();
        }

        // answer is stack ka top element
        ans.push_back(a.top());     // phle curr ko push nhi krenge kyuki a ke top me answer h apna
        a.push(curr);       // push current hi krenge hmesa kyuki vo next element ka answer ho skta hai
    }
}

int main()
{
int a[4]={2,1,4,3};
    return 0;
}