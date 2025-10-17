#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

class area
{

private:
    vector<int> prevsmaller(int *height, int n)
    {
        stack<int> st;
        st.push(-1); // -1 means no smaller element on right
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int curr = height[i];

            while (st.top() != -1 && curr <= height[st.top()])
            {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> nextsmaller(int *height, int n)
    {
        stack<int> st;
        st.push(-1); // -1 means no smaller element on right
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            int curr = height[i];

            while (st.top() != -1 && curr <= height[st.top()])
            {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestarea(int *height, int n)
    {
        // int n = height.size();
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

public:
    int findarea(int rect[4][4], int n, int m)
    {

        // compute area for yhe first row
        int area = largestarea(rect[0], m);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // row update :by adding previous row's value
                if (rect[i][j] != 0)
                {

                    rect[i][j] = rect[i][j] + rect[i - 1][j];
                }
                else
                {
                    rect[i][j] = 0;
                }
            }
            // entire row is updates now;
            area = max(area, largestarea(rect[i], m));
        }
        return area;
    }
};

int main()
{
    int rect[4][4] = {{0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};

    area a1;
    cout << "The largest area of the rectangle is " << a1.findarea(rect, 4, 4);

    return 0;
}