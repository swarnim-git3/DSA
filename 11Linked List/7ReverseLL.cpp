#include <iostream>
using namespace std;

class list
{

public:
    int data;
    list *next;

    list(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertathead(list *&head, int data)
{
    list *temp = new list(data);

    temp->next = head;
    head = temp;
}
void print(list *&head)
{
    list *temp = head;
    while (temp != NULL)

    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(list *&head)
{

    if (head == NULL || head->next == NULL)
    {
        cout << "The reversed linklist is " << head;
        return;
    }

    list *curr = head;
    list *prev = NULL;

    list *forward;
    while (curr != NULL)
    {

        //  print(head);
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        head = prev;
    }
}

int main()
{
    list *a1 = new list(3);
    list *head = a1;
    insertathead(head, 4);
    insertathead(head, 5);
    insertathead(head, 6);
    insertathead(head, 7);

    print(head);
    reverse(head);
    print(head);
    return 0;
}