#include <queue>
#include <vector>
#include <iostream>
#include <map>
#include <list>

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
        this->right = NULL; // firstly the evry node or root's left and right is assigned as NULL then buildtree overwrites the null
    }

    vector<int> verticalorder(node *root)
    {
        map<int, map<int, vector<int>>> mappin; // is mapping me horizontal distance from main root node and level store hogi along with the node values

        queue<pair<node *, pair<int, int>>> q; // vector jo hai vo node ki values hai
                                               // baki ke jo int hai vo horizontal distance and level honi cahiye

        vector<int> ans; // isme at last vala answer store hoga

        if (root == NULL)
        {
            return ans;
        }
        q.push(make_pair(root, make_pair(0, 0))); // jaise hum levelorder traversal me before while loop NULL push krte the vaise hi 0,0 push hoga kyuki starting me to  root hmesa 0 pe hota hai

        while (!q.empty())
        {
            pair<node *, pair<int, int>> temp = q.front(); // common sense lagao ki front me to yahi value padi hogi queue ke
                                                           // phla int horizontal distance hai and dusra level
            q.pop();
            node *frontnode = temp.first; // frontnode will contain the node

            int hd = temp.second.first;
            int level = temp.second.second;
            mappin[hd][level].push_back(frontnode->data); // hence frontnode conatins the temp.first so it has the value of it

            if (frontnode->left)

                q.push(make_pair(frontnode->left, make_pair(hd - 1, level + 1)));


            if (frontnode->right)

                q.push(make_pair(frontnode->right, make_pair(hd + 1, level + 1)));



            for (auto i : mappin)
            {
                for (auto j : i.second)
                {
                    for (auto k : j.second)
                    {
                        ans.push_back(k);
                    }
                }
            }
            return ans;
        }
    }
};

int levelOrderTraversal(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
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

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {

                q.push(temp->right);
            }
        }
    }
}

int main()
{

    return 0;
}