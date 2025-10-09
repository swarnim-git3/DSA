// valid Palindrome =Contains only (a-z) ,(A-Z), (0,9)   remove all special characters and check if palindrome or not

#include <iostream>
using namespace std;

int valid(char ch)

{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))

    {
        return 1;
    }

    else
    {
        return 0;
    }
}

char toLowercase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }

    else
    {

        char temp = ch - 'A' + 'a';

        return temp;
    }
}

bool check(string s)
{
    int st = 0;
    int e = s.length() - 1;

    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}

int main()
{
    string A = "12321 ";
    string temp = "";
    for (int i = 0; i < A.length(); i++)
    {
        if (valid(A[i]))
        {
            temp.push_back(toLowercase(A[i]));
        }
    }

    // for (int i = 0; i < temp.length(); i++)
    // {
    //     temp[i] = toLowercase(temp[i]);
    // }

    cout << check(temp);

    return 0;
}