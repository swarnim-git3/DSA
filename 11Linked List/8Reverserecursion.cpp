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

list *recurssion(list *&head)
{

    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    list *chotahead = recurssion(head->next);
    head->next->next = head; // smj gye;

    head->next = NULL;
    //print (chotahead);
    return chotahead;
}

int main()
{

    list *a1 = new list(5);

    list *head = a1;

    insertathead(head, 4);
    insertathead(head, 6);
    print(head);
    recurssion(head);
    print(a1);

    return 0;
}