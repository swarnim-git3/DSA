#include <iostream>
#include <vector>

using namespace std;

class node
{
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

    // traversing the left side

    void traverseLeft(node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL) // it means the root is lef node and we will write the different   function for that
        {
            return;
        }

        ans.push_back(root->data);

        if (root->left) // dekho agar root->left present hai kya, agar present hai to call maar do ,aur agar root->left null hoga to vo pehle hi eliminate ho jayega
        {
            traverseLeft(root->left, ans);
        }
        else // else me automatically root->right hi aayega kyuki leaf eliminate ho chuki hai left bhi eliminate ho chuka hai
        {

            traverseLeft(root->right, ans);
        }
    }

    // traversing trhe leaf nodes
    void traverseLeaf(node *root, vector<int> &ans)
    { // base case
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL) // then it is sure that the node is leaf
        {
            ans.push_back(root->data);

            return;
        }
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }

    // traversiing the right side
    void traverseRight(node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL) // it means the root is lef node and we will write the different   function for that
        {
            return;
        }

        // right me jaao
        traverseRight(root->right, ans);
        // left  me jaao agar right nhi present hai to
        traverseRight(root->right, ans);

        ans.push_back(root->data);
    }

    vector<int> boundary(node *root)
    {
        vector<int> ans;
        // base case

        if (root == NULL)
        {
            return ans;
        }
        ans.push_back(root->data);

        // traverse the left side
        traverseLeft(root->left, ans);

        // traverse the leaf nodes
        // leaf are present in both left and right subtree so we traverse the left part first

        // left subtree
        traverseLeaf(root->left, ans);
        // right subtree
        traverseLeaf(root->right, ans);

        // traverse the right side
traverseRight(root->right,ans);   

    }

    node *buildtree(node *root)
    {
        cout << "enter trhe data" << endl;
        int data;
        cin >> data;

        root = new node(data);

        if (data == NULL)
        {
            return 0;
        }

        root->left = buildtree(root->left);
        root->right = buildtree(root->right);
    }
};

int main()
{

    return 0;
}