#include <iostream>
using namespace std;

void reachome(int source, int dist)
{
    cout << " source " << source << " destination " << dist << endl;
    if (source == dist)
    {
        cout << "Ghar pe hi hu " << endl;
        return;
    }
    source = source - dist;
    reachome(source , dist);
}

int main()
{
    int distance = 20;
    int step = 2;
    reachome(distance, step);
    return 0;
}