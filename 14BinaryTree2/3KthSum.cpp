/*Given the root of a binary tree and an integer k, determine the number of downward-only paths where the sum of the node values in the path equals k.

Note: A path can start and end at any node within the tree but must always move downward (from parent to child).
*/
#include <vector>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)

    {
        data = d;
        left = NULL;
        right = NULL;
    }

    void solve(node *root, int k, int &count, vector<int> path)
    {
        // base case
        if (root == NULL)
        {
            return;
        }
        path.push_back(root->data);

        solve(root->left, k, count, path);
        solve(root->right, k, count, path);

        int sum = 0;
        int size = path.size();
        for (int i = size - 1; i >= 0; i--)
        {
            sum += path[i];                      // sum add hoga uske just baad check hoga 
             if (sum == k)
            {
                count++;
            }
        }

        path.pop_back();                           // pop tb hoga jb eek poore path ka sum check hone ke baad 
    }                                              // at the end pop hoga jb pora check ho jayega loop ke andar

    int sumkpath(node *root, int k)
    {
        int count = 0;
        vector<int> path;
        solve(root, k, count, path);
        return count;
    }
};

int main()
{

    return 0;
}
