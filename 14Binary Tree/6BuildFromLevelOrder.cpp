// in this code we give inpt 1 ,3,5,7,11,17,-1,-1,-1,-1,-1,-1,-1  then the output will bwcomw out deesired tree

#include <iostream>
#include <vector>
#include <queue>

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

void buildfromlevelorder(node* & root)        // mai kuch print nhi karana caht hu mai apni root node ko hi reference leke print karaunga     BEFORE node *buildfromlevelorder(node *root)
{
    queue<node *> q;
    cout << "Enter the data of the root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();

        cout << "Enter the left node " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter the right node " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
        node *root ; // initializing the root node with null initially
   // node* root =new node(5);    // this way i can initialize it with other than NULL  but buildtree will overwrite it so there is no point of writing it but this may be the way to write

    // creating a binary tree
    buildfromlevelorder(root);
    // input string or tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    return 0;
}
