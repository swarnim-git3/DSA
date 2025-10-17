// return  a array with next smallest element in the rest of the array
//  return -1 if not present
#include <vector>
#include <stack>
#include <iostream>
using namespace std;
vector<int> nextSmaller(int arr[], int n)
{
    stack<int> st;
    st.push(-1); // -1 means no smaller element on right
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (curr <= st.top())
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main()
{
    int arr[5] = {4, 2, 1, 4, 1};
    vector<int> sm = nextSmaller(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << sm[i] << " ";
    }

    return 0;
}