#include <iostream>
#include <map>

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

bool detectloop(link *&head)
{
    if (head == NULL)
    {
        return false;
    }

    map<link *, bool> visited; // this is how map is created
    link *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "present at element " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
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

int main()
{
    link *a1 = new link(4);

    link *head = a1;

    link *tail = a1;

    insertathead(head, 5);
    print(head);
    insertathead(head, 6);
    print(head);
    insertathead(head, 7);
    print(head);

    insertatposition(head, tail, 2, 8);
    print(head);
    tail->next = head->next;

  

    // cout << head->data;
    // cout << head->next->data;
    // cout << head->next->next->data;
    // cout << head->next->next->next->data;
    // cout << head->next->next->next->next->data;
    // cout << head->next->next->next->next->next->data;
    // cout << head->next->next->next->next->next->next->data << endl;

    if (detectloop(head))
    {
        cout << "cycle is present" << endl;
    }

    else
    {
        cout << "cycle is not present" << endl;
    }
    return 0;
}