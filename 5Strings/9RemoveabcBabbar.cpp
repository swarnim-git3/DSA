#include <iostream>
using namespace std;

string remove(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())      //if we use s.length ()!=0 then runtime will bw more
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string a = "aabbxxccssaabbabababababbbbaaaa";
    string p = "ab";
    cout << remove(a, p);

    return 0;
} 