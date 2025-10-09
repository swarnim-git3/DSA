#include <iostream>
using namespace std;

class node
{

public:
    int data;

    node *next;     //pointer is used because next contains address
    // constructor use in LL
      node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    node *n1 = new node(10);
    cout << n1->data << endl; // we are using this operator because n1 is pointer
    cout << n1->next << endl;

    return 0;
}