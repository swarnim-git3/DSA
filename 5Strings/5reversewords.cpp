// HOLD

#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
using namespace std;

string reve(string b)
{
    int s = 0;
    int e = b.length() - 1;
    while (s <= e)

    {
        swap(b[s], b[e]);
    }

    return b;
}

string word(string a)
{
    int j = 0;
    string temp;
    string store = "";
    for (int i = 0; i < a.length()-1; i++)
    {

        temp = "";
        while (a[j] != ' ')
        {
            temp.push_back(a[i]);
        }
        j++;
        //temp.push_back(' '); 
        reve(temp);
for(int i=0;i<temp.length();i++)
{
    
    store.push_back(temp[i]);
}

        store.push_back(' ');
        //if (a[i])
    }
    return store;
}
int main()
{

    string  a ="my hello  ";
  string b=word (a);
cout<<b;
    return 0;
}