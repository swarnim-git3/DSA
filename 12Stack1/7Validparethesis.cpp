// very important

#include <iostream>
#include <stack>
using namespace std;

bool isvalidparethesis(string expression)

{
    stack<char> str;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch == '{' || ch == '(' || ch == '[')
        {
            str.push(ch);
        }
        else
        {
            if (!str.empty())
            {
                char top = str.top();
                if (top == '{' && ch == '}' || top == '(' && ch == ')' || top == '[' && ch == ']')
                {
                    str.pop();
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (str.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string a = "[]{}()";
    cout << isvalidparethesis(a);

    return 0;
}