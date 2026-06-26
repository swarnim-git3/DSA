
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
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

    vector<int> BottomView(node *root)
    {

        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        map<int, int> topnode; // isme eek ind horizontal distance hai aand eek int value hai tree ki
        queue<pair<node *, int>> q;

        q.push(make_pair(root, 0));

        while (!q.empty())
        {
            pair<node *, int> temp = q.front();
            q.pop();
            node *frontnode = temp.first;
            int hd = temp.second;

            topnode[hd] = frontnode->data; // yaha pr condition nhi check hogi put krne ke liye seedha put krenge hum sirf dalenge kyuki value overwrite ho jayegi aur apne aap vo last value aayegi jo honi cahiye

            if (frontnode->left)
            {
                q.push(make_pair(frontnode->left, hd - 1));
            }
            if (frontnode->right)
            {
                q.push(make_pair(frontnode->right, hd + 1));
            }
        }
        for (auto i : topnode)
        {
            ans.push_back(i.second);               // the pushing will happen in correct order because the amp stores the data in increasing order
        }

        return ans;
    }
};

int main()
{

    return 0;
}