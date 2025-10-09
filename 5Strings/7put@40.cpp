#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
// by taking extra space
string replacebabbar(string str)
{
    char h;
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('0');
            temp.push_back('0');
        }

        else
        {
            temp.push_back(str[i]);
        }
    }

    return temp;
}

// Without taking etxtra space
string replace(string str)
{
    char h;
    string tmep = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, "@40"); // this is without creating the extra space
        }

        else
        {
            tmep.push_back(str[i]);
        }
    }

    return tmep;
}

int main()
{

    string hill = " i love yoiu   ";
    cout << replace(hill);

    return 0;
}