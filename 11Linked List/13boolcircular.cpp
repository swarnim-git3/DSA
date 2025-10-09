#include <iostream>
using namespace std;

class link
{
public:
    int data;
    link *next;
    link *prev;
    link(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

// this is insert doubly with cicular linklist

void insertdoubly(link *&head, link *&tail, int data)
{
    link *temp = new link(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        head->next = head;
        head->prev = head;
        return;
    }

    // ye baad me dekhenge
    temp->next = head;
    temp->prev = tail;
    tail->next = temp;
    head->prev = temp;
    head = temp;
}

bool circularly(link *&head)
{
    link *temp = head->next;

    if (head == NULL)
    {
        return true;
    }

    // if (head->next == NULL)           //need not to write
    // {
    //     return false;
    // }

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }
    return false;
}

int main()
{
    link *a1 = new link(6);
    link *head = a1;
    link *tail = a1;

    insertdoubly(head, tail, 5);
    insertdoubly(head, tail, 7);
    insertdoubly(head, tail, 8);

    // this is manual way

    // tail->next = head;
    // head->prev = tail;

    if (circularly(head))
    {
        cout << "yayyy ye hai circular" << endl;
    }
    else
    {
        cout << "nhi hai be saale" << endl;
    }
    cout << head->data;
    cout << head->next->data;
    cout << head->next->next->data;
    cout << head->next->next->next->data;
    cout << head->next->next->next->next->data;
    cout << head->next->next->next->next->next->data;

    return 0;
}