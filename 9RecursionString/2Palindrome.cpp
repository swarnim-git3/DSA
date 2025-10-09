#include <iostream>
using namespace std;

bool palindrome(string &arr, int s = 0)
{

    if (s > arr.length() - 1 - s)
    {
        return true;
    }

    if (arr[s] != arr[arr.length() - 1 - s])
    {

        return false;
    }

    if (arr[s] == arr[arr.length() - 1 - s])
    {

        palindrome(arr, s + 1); // kabhi b bhool ke    <<<s++>>>   mat likhna   <<<s+1>>>  hi likhna hamesa
    }
}

int main()
{
    string a = "NookkooN";
    if (palindrome(a))
        cout << "palindrome" << endl;
    else
        cout << "not" << endl;

    return 0;
}