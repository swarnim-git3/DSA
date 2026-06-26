#include <iostream>
#include <algorithm>
// #include<math.h>

using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        if (left == -1 || right == -1)
            return -1;

        if (abs(left - right) > 1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode *root)
    {
        return height(root) != -1;
    }
};