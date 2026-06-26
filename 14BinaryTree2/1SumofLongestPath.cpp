
#include <climits>
#include <vector>
#include <math.h>

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

    void solve(node *root, int sum, int &maxsum, int len, int &maxlen)
    { // base case
        if (root == NULL)
        {
            if (len > maxlen)
            {
                maxsum = sum;
                maxlen = len;
            }
            else if (len == maxlen)
            {
                maxsum = max(sum, maxsum);
            }
            return;

            sum = sum + root->data;
            solve(root->left, sum, maxsum, len + 1, maxlen);
            solve(root->right, sum, maxsum, len + 1, maxlen);
        }
    }

    int sumoflongestpath(node *root)
    {
        int len = 0;
        int maxlen = 0;

        int sum = 0;
        int maxsum = INT_MIN;
        solve(root, sum, maxsum, len, maxlen);
    }
};

int main()
{

    return 0;
}