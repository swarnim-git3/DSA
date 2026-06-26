#include <climits>
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

    node *solve(node *root, int &k, int nodes)
    {

        // base case
        if (root == NULL)
        {
            return 0;
        }
        if (root->data == nodes)
        {
            return root; // agar root mil gyi hai to vhi return kro na
        }

        node *leftans = solve(root->left, k, nodes);
        node *rightans = solve(root->right, k, nodes);

        if (leftans != NULL && rightans == NULL)
        {
            k--;
            if (k <= 0)
            {
                // answer lock krdo
                k = INT_MIN;
                return root;
            }
            return leftans;
        }

        if (leftans == NULL && rightans != NULL)
        {
            k--;
            if (k <= 0)
            {
                // answer lock krdo
                k = INT_MIN;
                return root;
            }
            return rightans;
        }
    }
    int kthAncestor(node *root, int k, int nodes) // here we have to find the kth ancestor of given node
    {
        node *ans = solve(root, k, nodes);

        ans = solve(root, k, nodes);
        if (ans == NULL || ans->data == NULL)
        {
            return -1;
        }

        else
            return ans->data;
    }
};

int main()
{

    return 0;
}