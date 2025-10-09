#include <iostream>
using namespace std;

int len(string s)
{
    int count = 0;
    int i = s.length() - 1;
    for (; i >= 0 && s[i] == ' '; i--)
    {
        // The loop body is empty; the work is done in the loop's header.
    }

    // 2. Count the characters of the last word until a space or the
    //    beginning of the string is encountered using another for loop.
    for (; i >= 0 && s[i] != ' '; i--)
    {
        count++;
    }

    return count;
}

int main()
{
    string s = "dwff fc fsd dsdsc efv    ";
    cout << len(s);
    return 0;
} 