#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<string, int> a; // here unordered_map is a keyword not a random variable

    //  1st insertion
    pair<string, int> q = make_pair("swarnim ", 4); // pair and make_pair are keywords
    a.insert(q);                                    // insert is keyworD

    // 2nd insertion
    pair<string, int> s("love", 7);
    a.insert(s);

    // 3rd insertion

    a["TERA"] = 1;

    a["TERA"] = 2; // for same key if we put  different value the value gets updated np new pair gets created

    // search 1
    cout << a["TERA"] << endl;
    cout << a.at("swarnim ") << endl;

    cout << a["unknown string "] << endl;    //   if we try to find the key which is not saved then it returns 0
                                             // THIS CREATES THE ENTRY WITH ZERO
    cout << a["unknn string "] << endl;      // THIS CREATES THE ENTRY WITH ZERO HMESA ZERO KE SAATH HI ENTRY BANEGI OF NEW KEY
    cout << a.at("unknown string ") << endl; //     IF AFTER DEFINING THE UNKNOWN KEY  LIKE ABOVE WE TRY TO ACCESS IT IT WILL GIVE 0 AS A VLVAUE OTHERWISE IT WILL GIVE ERROR

    // SIZE
    cout << a.size() << endl;

    // to check presence
    cout << a.count("love") << endl; // this will check the presence by giving the output 0 or 1

    // erase
    a.erase("love"); /// this will erase the particular KEY

   // TO ACCESS ALL THE MAP
    for (auto i : a)
    {
        cout << i.first << " " << i.second << endl; // first access the first value i.e. key and second access the second value i.e. value
    }

    // iterator

    unordered_map<string, int>::iterator it = a.begin();                    // the unordered map does not guarantee the sequence output but map does order the sequence of output


    while (it != a.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}





// time cvomplexity of maps     O(log n)
// unordered maps               O(1)
