#include <iostream>
using namespace std;
string duplicate(string a)
{
    bool changed = true;

    while (changed)
    { changed =false;
        for (int i = 0; i < a.length() - 1; )
        {
            if (a[i] == a[i + 1])
            {
                a.erase(a.find(i, 2));
                changed = true;
                break;
            }
        }
    }
    return a;
}
int main()
{
    string a = "assbbdhgdhjaa";
    cout << duplicate(a);

    return 0;
}