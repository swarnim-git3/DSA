#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};
node *insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

node *find1(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *find2(node *&head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node *a1 = new node(5);

    node *head = a1;
    node *for1;
    node *for2;

    insertathead(head, 6);
    insertathead(head, 7);
    insertathead(head, 8);
    insertathead(head, 9);
  //  insertathead(head, 9);
    print(head);
    for1 = find1(head);
    for2 = find2(head);
    print(for1);
    print(for2);

    return 0;
}