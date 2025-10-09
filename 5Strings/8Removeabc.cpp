// Rudra
//it cam be done by recursion
#include <iostream>
using namespace std;

string remove(string str, string del)
{
    string test;

    for (int i = 0; i < str.length(); i++)
    {
        string temp = "";
        for (int j = i; j < i + del.length(); j++)
        {
            temp.push_back(str[j]);
        }

        if (temp == del)
        {

            str.replace(i, del.length(), "\0");
        }

        // for (int i = 0; i < str.length(); i++)
        // {
        //     string temp = "";
        //     for (int j = i; j < i + del.length(); j++)
        //     {
        //         temp.push_back(str[j]);
        //     }

        //     if (temp != del)
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         remove(str, del);
        //     }
        // }
    }

    // for (int i = 0; i < test.length(); i++)
    // {
    //     string temp = "";
    //     for (int j = i; j < i + del.length(); j++)
    //     {
    //         temp.push_back(test[j]);
    //     }

    //     if (temp == del)
    //     {

    //         remove(test, del);
    //     }
    // }
    return str;
}
int main()
{
    string a = "aabbeeccabbxxssjj";
    string b = "ab";
    cout << remove(a, b);
    return 0;
}