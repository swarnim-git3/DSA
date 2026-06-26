#include <iostream>
#include <queue>

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
        this->right = NULL;               // firstly the evry node or root's left and right is assigned as NULL then buildtree overwrites the null 
    }
};

node *buildtree(node *root) // writing both the node* root and node *root are same
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data); // this is the way for heap allocation
                           // the stack allocation is done when  a value is written in place of (data)
 
    if (data == -1)                // -1 likh ke hum end krte hai kisi b node ko
    {
        return NULL;
    }

    cout << "Enter the data for the left of the root node " << data << endl;
    root->left = buildtree(root->left); // the recursion will manage the entries we just have to call the buildtree function

    cout << "Enter the data for the right side or child of the node " << data << endl;
    root->right = buildtree(root->right);
}


//levelordertraversal traverse the tree level by level like it prints or do anyrhing but will do it by level
void levelordertraversal(node *root) // it works on level  like level 0 level 1 level 2
{
    queue<node *> q;         // here the queue is node type because  we need the address to access the child nodes otherwise the values cannot be accessed 
    q.push(root);              // only 1 will be pushed in queue and then null is pushed 
    q.push(NULL); // we are pushing the null because first level is complete




    while (!q.empty())        // pehla null enter hone ke baad queue me baki ke null and entries jo queue me hongi vo while loop manage krega level wise
    {
        node *temp = q.front();
       
        q.pop();


        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }


        else
        {
             cout << temp->data << " ";

            if (temp->left) // this is written because if there is any element present in the left side of the root then the condition is right else not
            {
                q.push(temp->left);
            }
            
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }           // entries be like in queue ---- 1 NULL 3 5 NULL 7 11 17    
}

int main()
{

    node *root =NULL; // initializing the root node with null initially
   // node* root =new node(5);    // this way i can initialize it with other than NULL  but buildtree will overwrite it so there is no point of writing it but this may be the way to write

    // creating a binary tree
    root = buildtree(root);
    // input string or tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // levelordertraversal
    cout << "Printing the string " << endl;
    levelordertraversal(root);

    return 0;
}
