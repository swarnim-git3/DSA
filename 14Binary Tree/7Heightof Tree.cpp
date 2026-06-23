#include <queue>

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
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)

{
    int data;
    cout << "enter the data " << endl;
    cin >> data;
    root = new node(data);

    if (data == -1) // yaha pe null nhi hogaa obviously kyuki agar hume node end krni hai to -1 likhenge na ki NULL
    {

        return NULL;
    }

    cout << "Enter the left node of the data" << endl;
    root->left = buildtree(root->left);
    cout << "Enter the right node of the data" << endl;
    root->right = buildtree(root->right);
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left); // the left will store the left most height of the mian root node and recursion will take care of it
    int right = height(root->right);

    return (max(left, right) + 1); // max height is the maximum of both left and right  +1 is done in order to add the height of the root node
}

int main()
{
    node *root = NULL;

    return 0;
}