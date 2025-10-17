// in this code we have to calculate the minimum number of time we have to edit the string to make it valid
//hehehehehe
#include <iostream>
#include <stack>
using namespace std;

int cost(string brace)
{
    stack<char> s;
    int count;

    int a = 0;
    int b = 0;
    int size = brace.length();
    for (int i = 0; i < size; i++)
    {
        char ch = brace[i];

        if (size % 2 == 1)
        {
            return -1;
        }

        else
        {
            if (ch == '{')
            {
                cout << "hello1" << endl;
                s.push(ch);
                a++;
            }
            else
            {
                if (!s.empty() && s.top() == '{')
                {
                    cout << "hello2" << endl;
                    s.pop();
                    a--;
                }
                else
                {
                    cout << "hello3" << endl;
                    s.push(ch);
                    b++;
                }
            }
        }
    }
    return count = (a + 1) / 2 + (b + 1) / 2;
}

int main()
{
    string name = "{{}}}{";

    cout << "The amount of changes or the minimum cost is " << cost(name);

    return 0;
}