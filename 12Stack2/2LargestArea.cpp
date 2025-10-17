//this is the finding the largest area of the histogram
#include <iostream>
#include <vector>
#include <limits.h>
#include <stack>
using namespace std;

vector<int> nextsmaller(vector<int> &height, int n)
{
    stack<int> st;
    st.push(-1); // -1 means no smaller element on right
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = height[i];

        while (st.top()!=-1 && curr <= height[st.top()])
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevsmaller(vector<int> &height, int n)
{
    stack<int> st;
    st.push(-1); // -1 means no smaller element on right
    vector<int> ans(n);

    for (int i = 0; i <n ; i++)
    {
        int curr = height[i];

        while (st.top()!= -1 && curr <= height[st.top()])
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestarea(vector<int> &height)
{
    int n = height.size();
    int area;
    int max = INT_MIN;
    vector<int> next;
    next = nextsmaller(height, n);
    vector<int> prev;
    prev = prevsmaller(height, n);

    for (int i = 0; i < n; i++)
    {
        int len = height[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int width = next[i] - prev[i] - 1;
        area = len * width;
        while (max < area)
        {
            max = area;
        }
    }
    return max;
}

int main()
{
vector<int > height={3,3,3,3,3,3};
cout<<largestarea(height);
    return 0;
}