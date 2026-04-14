#include <queue>
#include <stack>
#include <iostream>
using namespace std;
int Kwindow(long long int a[], long long int n, long long int k)
{

    deque<long long> dp;
    vector<long long> ans;

    for (int i = 0; i < k; i++)
    {
        if (a[i] < 0) // yaha p else isiliye nhi likha hai kyuki hume sirf negative element hi cahiye
        {
            dp.push_back(i);
        }
    }

    // ab yaha pe check krenge ki dp khali hai ya bhara hai
    // agar khali hai matlb first K window me koi b element negative nhi hai
    // agar kuch elements hue iska mtlb ki kuch to negative hai

    if (dp.size() > 0) // isme sirf pehla element hi jayega bhale hi kitne ki elements ke index store ho dp me kyuki ye loopme nhi likha hai and condition sirf eek baar run hogi
    {
        ans.push_back(a[dp.front()]);
    }
    // matlb dp khali hai
    else
    {
        ans.push_back(0);
    }
    // ab baki bache hue k windows ke liye run krenge

    for (int i = k; i < n; i++)
    {
        // remove kro dp se starting k vo elements jo window me nh aate hai

        if (!dp.empty() && i - dp.front() >= k)
        {
            dp.pop_front();
        }
        // addition of negative element ka index in dp
        if (a[i] < 0)
        {
            dp.push_back(i);
        }

        if (dp.size() > 0) // isme sirf pehla element hi jayega bhale hi kitne ki elements ke index store ho dp me
        {
            ans.push_back(a[dp.front()]);
        }
        // matlb dp khali hai
        else
        {
            ans.push_back(0);
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    long long int arr[] = {-8, 2, 3, -6, 10};
    Kwindow(arr, 5, 2);

    return 0;
}