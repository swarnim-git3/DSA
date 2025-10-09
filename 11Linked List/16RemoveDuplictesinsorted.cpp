#include <iostream>
using namespace std;

class link
{
public:
    int data;
    link *next;

    link(int a)
    {
        data = a;
        next = NULL;
    }
};

void insertathead(link *&head, int data)
{
    link *temp = new link(data);
    temp->next = head;
    head = temp;
}

link *removedupli(link *&head)
{

    link *curr = head;

    // empty list
    if (curr == NULL)
    {
        return head;
    }

    // if not empty
    link *todelete;
    link *toupdate;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->data == curr->next->data)
        {

            todelete = curr->next;
            toupdate = curr->next->next;
            curr->next = toupdate;
            delete todelete;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

void print(link *&temp)
{
    link *head = temp;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    link *a1 = new link(5);

    link *head = a1;

    insertathead(head, 6);
    insertathead(head, 7);
    insertathead(head, 7);
    insertathead(head, 9);
    print(head);
    removedupli(head);
    print(head);
    return 0;
}
