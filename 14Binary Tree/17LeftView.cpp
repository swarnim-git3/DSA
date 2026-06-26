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

    void solve(node *root, vector<int> &ans, int level)
    {
        // base case
        if (root == NULL)
        {
            return;
        }

        if (level == ans.size()) // bhut zaroori hai ye smjhna  kyuki 1st level ka mai phle push kr dunga to size b 1 level b 1 then 2nd level jaise shuru hogi vo push krdunga to size and level jaisehi match kre turant push kro
        {
            ans.push_back(root->data);
        }
        solve(root->left, ans, level + 1); // level plus one isiliye hori hai kyuki left ya right jari hai mtlb niche jara hoga compiler and niche gya to level plus hoga
        solve(root->right, ans, level + 1);

        ///             right view mw bss right vali statement uuper jayegi nothing else
        
    }

    vector<int> leftview(node *root)
    {

        vector<int> ans;
        solve(root, ans, 0);
        return ans;
    }
};

int main()
{

    return 0;
}