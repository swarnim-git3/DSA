// redundant vo hota hai jisme needless brackets lage hote hai

#include <iostream>
#include <stack>
using namespace std;
bool realcheck(stack<char> open, stack<char> close)
{

    if (open.empty() || close.empty())
    {
        return true;
    }

    if (open.top() == '(' && close.top() == ')')
    {
        return false;
    }
    else
    {
        while (open.top() != '(')
        {
            open.pop();
        }
        close.pop();
    }
    realcheck(open, close);
}

bool check(string s)
{
    char ch;
    stack<char> open; // yaha space use kri hai kosis kro ki space na use ho
    stack<char> close;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        if (ch == '(' || ch == '*' || ch == '-' || ch == '/' || ch == '+')
        {
            open.push(ch);
        }
        else if (ch == ')')
        {
            close.push(ch);
        }
    }
    return realcheck(open, close);
}

bool findbracket(string &s)               //this is by babbar
{
    bool redundant = true;
    stack<char> st;
    char ch;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        if (ch == '(' || ch == '*' || ch == '-' || ch == '/' || ch == '+')
        {
            st.push(ch);
        }

        else
        {
            if (ch == ')')
            {
                while (st.top() != '(')
                {
                    if (ch == '*' || ch == '-' || ch == '/' || ch == '+')

                    {
                        redundant = false;
                    }
                    st.pop();
                }
            }
        }
    }
    return redundant;

}

int main()
{
    string a = "(a+r*q-g)";
    string b = "(a+r*q-g)";
    if (check(a))
    {
        cout << "Yes a is not redundant " << endl;
    }

    else
    {
        cout << "a is  redundant " << endl;
    }
    if (check(b))
    {
        cout << "Yes b is not redundant " << endl;
    }
    else
    {
        cout << "b is redundant " << endl;
    }

    if (findbracket(a))
    {
        cout << "Yes a is not redundant " << endl;
    }

    else
    {
        cout << "a is  redundant " << endl;
    }

    return 0;
}