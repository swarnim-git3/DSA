#include <iostream>
using namespace std;

char toLwercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }

    else
    {

        char temp = ch - 'A' + 'a';

        return temp;
    }
}

int palindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLwercase(a[s]) != toLwercase(a[e]))
        {
            return 0;
        }

        else
        {
            s++;
            e--;
            return 1;
        }
    }
}
int main()
{
    char A[] = "Naaninaan";

    int a = palindrome(A, 9);

    if (a == 1)
    {
        cout << "The String is palindrome";
    }

    else

    {
        cout << "The String is not palindrome";
    }
    return 0;
}