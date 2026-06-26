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

    node *LowestCommonAncestor(node *root, int n1, int n2) // n1 n2 are those number jinka ancestor nikalna hai
    {
        // base case
        if (root == NULL)
        {
            return NULL;
        }
        if (root->data == n1 || root->data == n2)               //jaise hi vo number milega hum use return krenge 
        {
            return root;
        }

        node *leftans = LowestCommonAncestor(root->left, n1, n2);
        node *rightans = LowestCommonAncestor(root->right, n1, n2);


        //ye 4 condition ye check kren ke liye hai ki left and right dono jiss jagah mil jayenge vhi answer hoga hamara kyuki soch ke dekho tree ki node me left and right dono side se value return hoke aari hai to vahi node hamari ans hogi
        if (leftans!=NULL && rightans!=NULL)
    {
        return root;
    }
    else if (leftans!=NULL && rightans==NULL)
    {
        return leftans;
    }
    else if (leftans==NULL && rightans!=NULL)
    {
        return rightans;
    }
    else 
    {
        return NULL;
    }
    }
};

int main()
{

    return 0;
}