// dodabara karna hai

#include <iostream>
using namespace std;

class nstack
{
private:
    int *arr;
    int *top;
    int *next;

    int n;
    int s;
    int freespot;

public:
    nstack(int N, int S)
    {

        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // top ka initialization
        for (int i = 0; i < n; i++)
        {

            top[i] = -1;
        }
        // next ka initilization

        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        // update last index of next to -1;

        next[s - 1] = -1;

        // initialize freespot

        freespot = 0;
    }

    bool push(int x, int m) // here x is the element to push
    {

        if (freespot == -1)
        {
            return false;
        }

        // find index
        int index = freespot; // jaha pe element daaloge in the array

        freespot = next[index]; // update freespot

        // insert element into array
        arr[index] = x;

        // update next because last position bhar gyi hai
        next[index] = top[m - 1];

        // update top
        top[m - 1] = index;

        return true;
    }

    int pop(int m)
    {
        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];

        top[m-1]=next[index];

        next[index] = freespot;

        freespot = index;

        return arr[index];
    }
};

int main()
{

    return 0;
}