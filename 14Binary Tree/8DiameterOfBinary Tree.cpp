#include <iostream>
#include <climits>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)

    {
        this->data = d;
        this->left = NULL;
        this->right = NULL; // firstly the evry node or root's left and right is assigned as NULL then buildtree overwrites the null
    }
    int solve(node *root, int &result)
    {
        int left = solve(root->left, result);
        int right = solve(root->right, result);

        result = max(result, left + right);

        return 1 + max(left, right);
    }

    int diameter(node *root)

    {

        if (root == NULL)
        {

            return 0;
        }
        int result = INT_MIN;
        solve(root, result);
        return result;
    }
};

int main()
{

    return 0;
}