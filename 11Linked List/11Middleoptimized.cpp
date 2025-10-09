#include <iostream>
using namespace std;

class link

{
public:
    int data;
    link *next;

    link(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertathead(link *&head, int data)
{
    link *temp = new link(data);

    temp->next = head;
    head = temp;
}

int getmiddle(link *&head)
{
    if (head == NULL || head->next == NULL)

    {
        return head->data;
    }
    link *fast = head->next;
    link *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow->data;
}

int main()
{
    link *a1 = new link(4);

    link *head = a1;
    insertathead(head, 6);
    insertathead(head, 8);
    insertathead(head, 10);
cout<<getmiddle(head);

    return 0;
} 