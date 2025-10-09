/// gand fad program
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
private:
    bool issafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
    { // you have reached x and y here
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;
        // now i have four choices D, L ,R ,U

        // DOWN
        int newx = x + 1;
        int newy = y;
        if (issafe(newx, newy, n, visited, m))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // LEFT
        newx = x;
        newy = y - 1;
        if (issafe(newx, newy, n, visited, m))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // UP
        newx = x - 1;
        newy = y;
        if (issafe(newx, newy, n, visited, m))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // RIGHT
        newx = x;
        newy = y + 1;
        if (issafe(newx, newy, n, visited, m))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findpath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;
        vector<vector<int>> visited = m; // ye step isiliye kiya ki jitni rows and column 'm' me hai utni hi visited me a jaye
        // initialize it with '0'

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = ""; // path stores that where where the rat can go
        solve(m, n, ans, srcx, srcy, visited, path);
       sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    solution s;
    vector<vector<int>> a = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    vector<string> paths = s.findpath(a, 4);
    for (string &p : paths)
        cout << p << "  ";
    cout << endl;

    return 0;
}