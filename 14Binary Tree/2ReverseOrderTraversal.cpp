#include <iostream>
#include <queue>
#include <stack>

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
node *build(node *root)
{
    cout << "Enter the data " << endl;

    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the left of " << data << endl;
    root->left = build(root->left);
    cout << "enter the right of " << data << endl;
    root->right = build(root->right);
}
void reverseorder(node *root)
{
    queue<node *> q;
    q.push(root);
    // q.push(NULL);             // we do not need null because we dont seperate to the levels here
    stack<int> s;

    while (!q.empty())
    {
        node *temp = q.front();
        s.push(temp->data);
        q.pop();

        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
    }
    cout << "the reversed level order traversal is " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    node *root = NULL; // initializing the root node with null initially

    // creating a binary tree
    root = build(root);
    // input string or tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // levelordertraversal
    cout << "Printing the array " << endl;
    reverseorder(root);

    return 0;
}