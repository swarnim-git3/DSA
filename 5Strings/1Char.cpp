#include <iostream>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)

    {
        count++;
    }

    return count;
}

int main()

{
    // Length
    char name[20];
    cin >> name;
    cout << getlength(name);

    // String Entry
    char ch[20];
    cin >> ch;

    cout << ch;
    return 0;
}