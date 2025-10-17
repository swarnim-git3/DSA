
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class celeb
{
    bool knows(vector<vector<int>> &m, int n, int a, int b)
    {
        if (m[a][b] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    int celebrity(vector<vector<int>> &m, int n)
    {
        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (knows(m, n, a, b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int rowcount = 0;

        for (int i = 0; i < n; i++)
        {

            if (m[s.top()][i] == 0)
            {
                rowcount++;
            }
        }

        int colcount = 0;
        for (int i = 0; i < n; i++)
        {

            if (m[i][s.top()] ==1)
            {
                colcount++;
            }
        }
        if (rowcount == n && colcount == n - 1)
        {
            return s.top();
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    vector<vector<int>> m;
    m = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    celeb a1;
    cout << a1.celebrity(m, 3);

    return 0;
}