#include <stack>
#include <queue>
#include <iostream>
#include <unordered_map>

using namespace std;
string forstnonrepeat(string A)
{

    unordered_map<char, int> count;
    queue<int> q;
    string ans;
    for (int i = 0; i < A.length(); i++)
    {
        char ch = A[i];

        // increase count
        count[ch]++;

        // queue me push kro
        q.push(ch);

        while (!q.empty())
        {
            if (count[A.front()] > 1)
            { // repeating character
                q.pop();
            }
            else
            {
                // non repeating character milgaya
                ans.push_back(q.front());
            }
        }
    }
}

int main()
{
    queue<string> S;
    deque<string> store;
    S.push("a");
    S.push("a");
    S.push("b");
    S.push("c");
    // store = NonRepeat(S);
    cout << endl;
    int size = store.size();
    for (int i = 0; i < size; i++) //
    {
        cout << store.front() << " ";
        store.pop_front();
    }
    return 0;
}