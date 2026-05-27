#include <unordered_map>
#include <map>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumfrequency(vector<int> &arr, int n)
{

    unordered_map<int, int> count;

    int maxfreq = 0;
    int maxAns = 0;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        maxfreq = max(maxfreq, count[arr[i]]);
    }

    int maxi = INT_MIN;
    int ans = -1;

    for (auto i : count)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
    }

    return ans;
}
int main()
{

    return 0;
}