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

    vector<int> topview(node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        map<int, int> topnode;   // isme eek ind horizontal distance hai aand eek int value hai tree ki uss HD ki
        queue<pair<node *, int>> q; // ye jo int hai ye horizontal distance show krega

        q.push(make_pair(root, 0)); // first root and uski horizontal distacnce

        while (!q.empty())
        {
            pair<node *, int> temp = q.front();

            node *frontnode = temp.first;
            int hd = temp.second;

            // if the one value is present for horizontal distance then do not consider the same value again

            if (topnode.find(hd) == topnode.end())         // end will show that akhiri tk koi element nhi mila mtlb last me end hi store ota hai map ke  aur vaha tk pohcha hai to  mtlb nhi h vo node
            {
                topnode[hd] = frontnode->data;
            }

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

            ans.push_back(i.second);
        }
        return ans;
    }
};

int main()
{

    return 0;
}