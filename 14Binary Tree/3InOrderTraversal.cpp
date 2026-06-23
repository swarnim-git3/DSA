//  INORDER               PREORDER            POSTORDER
//   LNR                    NLR                  LRN

// the InOrderTraversal is based on LNR where as LNR stand for ----Left Node Right    whenever the node comes then we have to print or perform the operation in it

#include <iostream>
#include <vector>
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

node *buildtree(node *root) // writing both the node* root and node *root are same
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data); // this is the way for heap allocation
                           // the stack allocation is done when  a value is written in place of data
 
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for the left of the root node " << data << endl;
    root->left = buildtree(root->left); // the recursion will manage the entries we just have to call the buildtree function

    cout << "Enter the data for the right side or child of the node " << data << endl;
    root->right = buildtree(root->right);
}



node*  inorder(node *root)
{
    if (root == NULL)
    {
        return root;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
    

// this is the iterative approach   
vector<int> norderTraversal(node *root)
{
    vector<int> ans;
    stack<node *> st;
    node *curr = root;
    while (curr != NULL || !st.empty())
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr->left;
        }

        curr = st.top();
        st.pop();

        ans.push_back(curr->data);

        curr->right;
    }
}

int main()
{
node* root=NULL;

    root = buildtree(root);
    // input string or tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // levelordertraversal
    cout << "Printing the string in inorder traversal" << endl;
   inorder (root);
    return 0;
}