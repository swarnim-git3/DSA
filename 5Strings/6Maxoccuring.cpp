#include <iostream>
using namespace std;

char getchar(string s)

{
    int arr[26] = {0};
    int num;
    char ch;
    for (int i = 0; i < s.length() ; i++)
    {
        ch = s[i];
        // Lowercase
        if (ch >= 'a' && ch <= 'z')
        {

            num = ch - 'a';
        }
        // Uppercase
        else
        {
            num = ch - 'A';
        }
        arr[num]++;
    }

    char c;
    int max = -1;

    for (int i = 0; i < 26; i++)

    {
        if (arr[i] > max)
        {
            max = arr[i];
            c = i;
        }
    }

   c=c+65;

    return c;
}

int main()
{
    string a = "ab  acv  c";
    cout << getchar(a);

    return 0;
}