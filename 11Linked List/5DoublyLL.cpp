#include <iostream>
using namespace std;

class link
{

public:
    int data; // these all are member variable
    link *next;
    link *prev; // by using this we can specify that use the member variable

    // constructor
    link(int n)
    {
        data = n; // " this-> " is used when the name of member variable is same as parameter
        next = NULL;
        prev = NULL;
    }

    // link(int n)
    // {
    //     this->data = n;
    //     this->next = NULL;                 //in this xase this is not required because the name of parameter and member varoable is different
    //     this->prev = NULL;
    // }

    ~link()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertathead(link *&head, int data)
{
    link *temp = new link(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(link *&tail, int data)
{
    link *temp = new link(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(link *&head, link *&tail, int position, int data)
{
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }

    link *temp = head;
    int cnt = 1;
    while (cnt < position - 1)

    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }
    // creating node for data
    link *nodetoinsert = new link(data);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void print(link *&head)
{
    link *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletenode(link *&head, int position)
{
    if (position == 1)
    {
        link *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        link *curr = head;
        link *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int getlength(link *&head)
{
    int cnt = 0;
    link *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

int main()
{
    link *node1 = new link(4);

    link *head = node1;
    link *tail = node1;
    print(head);
    cout << getlength(head);
    cout << endl;
    insertathead(head, 5);
    insertathead(head, 7);
    print(head);
    // print(node1);
    insertattail(tail, 1);
    insertattail(tail, 2);
    insertattail(tail, 3);
    print(node1);
    insertatposition(head, tail, 4, 90); /// rudra se puchna hai ki node 1 me ya to head ki hi value store hoti hai ya to sorf tail ki
    print(head);
    // print(tail);
    
    
    deletenode(head,7);
    print(head);

    return 0;

}
