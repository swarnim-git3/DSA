#include <iostream>
using namespace std;
class a
{

public:
    int data;
    a *next;

    a(int n)
    {
        data = n;
        next = NULL;
    }

    // we have to create the destructor

    ~a()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free at node with data " << value << endl;
    }
};

void insertathead(a *&head, int data)
{
    a *temp = new a(data);
    temp->next = head;
    head = temp;
}

void insertattail(a *&tail, int data)
{
    a *temp = new a(data);
    tail->next = temp;
    tail = temp;
}

void insertinmiddle(a *&head, a *&tail, int position, int data)

{

    // this if we have to insert the node in starting position
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }

    a *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // this is for inseting in last
    if (head->next == NULL)
    {
        insertattail(tail, data);
    }

    // this creation is for inserting the node in between
    a *insertnode = new a(data);
    insertnode->next = temp->next;
    temp->next = insertnode;
}

void print(a *yemp)
{
    while (yemp != NULL) // yemp->next will not print the last element
    {
        cout << yemp->data << " ";
        yemp = yemp->next;
    }
}

void deletion(a *&head, int position)
{
    // deleting start node or first node
    if (position == 1)
    {
        cout << "hello" << endl;

        a *temp = head;
        head = head->next;

        // freeing the memory by calling destructor
        temp->next = NULL;
        delete temp;
        return;
    }

    else
    {
        cout << "hello2" << endl;
        a *curr = head;
        a *prev = NULL;

        int cnt = 1;
        while (cnt < position) // do understand this part
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        return;
    }
}

int main()
{

    a *hello = new a(5);

    a *head = hello;
    a *tail = hello;

    insertathead(hello, 34);
    insertathead(hello, 14);
    insertathead(hello, 54);
    insertathead(hello, 64);
    insertathead(hello, 74);
    print(hello);
    // insertathead(hello, 714);
    insertattail(tail, 714);                    //rudra se puchunga
    // print(hello);

    // deletion(hello, 6);
    cout << endl;
    print(hello);

    return 0;
}