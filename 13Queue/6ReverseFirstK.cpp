//reverse first k elememts of a aqueue

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

queue<int> reverse(queue<int> q, int k)
{
    stack<int> s;
    // step  first k elemennt from q and put in stack

    for (int i = 0; i < k; i++)

    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // fetch from stack and put agai in queue

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t = q.size() - k;

    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    // for (int i = 0; i < q.size(); i++)
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    return q;
}

int main()

{
    queue<int> aq;
    queue<int> ans;
    aq.push(1);
    aq.push(2);
    aq.push(3);
    aq.push(4);
    aq.push(5);
    aq.push(6);
    ans = reverse(aq, 2);
    // cout << ans.front();
    // ans.pop();
    // cout << ans.front();
    // ans.pop();
    // cout << ans.front();
    // ans.pop();

    // cout << ans.front();
    // ans.pop();
    // cout << ans.front();
    // ans.pop();
    // cout << ans.front();
    // ans.pop();

    int size=ans.size();
      for (int i = 0; i < size; i++)               //  ans.size() nahi hogi conditon me  kyuki size har baar update ho rha hai
    {
        cout << ans.front() << " ";
        ans.pop();
    }

    return 0;
}