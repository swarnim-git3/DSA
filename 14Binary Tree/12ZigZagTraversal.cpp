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
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildtree(node *root) // writing both the node* root and node *root are same
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data); // this is the way for heap allocation
                           // the stack allocation is done when  a value is written in place of (data)

    if (data == -1) // -1 likh ke hum end krte hai kisi b node ko
    {
        return NULL;
    }

    cout << "Enter the data for the left of the root node " << data << endl;
    root->left = buildtree(root->left); // the recursion will manage the entries we just have to call the buildtree function

    cout << "Enter the data for the right side or child of the node " << data << endl;
    root->right = buildtree(root->right);
}

vector<vector<int>> ziglevelordertraversal(node *root) // isme kuch nhi krte hai root daal dete hai eek baar null uske baad dalte hai and then uske child and all while loop manage krega
{
    vector<vector<int>> ans;
    
    queue<node *> q;
    q.push(root);

    bool l2r = true;    // the flag to remomber from ehich side we have to traverse the particular level
                        // this flag is important to write outside the while loop because otherwise the l2r will always be true                     

     while (!q.empty()) // ye loop hai tree ko traverse krne ke liye
    {

        int size = q.size();
        vector<int> level(size);
     

        for (int i = 0; i < size; i++) // ye loop hai level ko traverse krne ke liye mtlb ye ki level me elements right side se jayenge ya left side se
        {
            node *temp = q.front();
            q.pop();

            int index = l2r ? i : size - 1 - i;

            level[index] = temp->data;

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        l2r=!l2r;
        ans.push_back(level);
    }
    return ans;
}

int main()
{

    node *root = NULL; // initializing the root node with null initially
                       // node* root =new node(5);    // this way i can initialize it with other than NULL  but buildtree will overwrite it so there is no point of writing it but this may be the way to write

    // creating a binary tree
    root = buildtree(root);
    // input string or tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    vector<vector<int>> realans = ziglevelordertraversal(root);

    // levelordertraversal

    cout << "Printing the string " << endl;
    for (int i = 0; i < realans.size(); i++)
    {
        for (int j = 0; j < realans[i].size(); j++)
        {
            cout << realans[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
