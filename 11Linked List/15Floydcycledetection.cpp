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

bool floyd(link *&head)
{
    link *fast = head;
    link *slow = head;

    if (fast == NULL)
    {
        return false;
    }

    while (fast != NULL && fast->next != NULL)
    {

        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

bool babbarfloyd(link *&head)
{
    link *fast = head;
    link *slow = head;

    if (fast == NULL)
    {
        return false;
    }

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

/// vo vala point jaha se loop shuru hua ha

link *loopstart(link *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    link *slow = head;
    link *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            break;
        }
    }
    slow = head;
    // intersection se dono ko eek eek aage badhana haai naa ki do do
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // slow =
    return slow;
}

int removeloop(link *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    link *startofloop = loopstart(head);           //gar loopstart hi null hua to yaha b null ho jayega to condition lagni padegi
    if (startofloop==NULL)
    {
        return 0;
    }
    link *temp = startofloop;
    while (temp->next != startofloop) // temp->next is important
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    link *a1 = new link(4);
    link *head = a1;
    link *tail = a1;

    insertathead(head, 5);
    insertathead(head, 6);
    insertathead(head, 7);
    insertathead(head, 8);
    print(head);

    tail->next = head->next;
    // print(head);
    // cout << floyd(head) << endl;
    //  cout << babbarfloyd(head) << endl;
    // cout << head->data;
    // cout << head->next->data;
    // cout << head->next->next->data;
    // cout << head->next->next->next->data;
    // cout << head->next->next->next->next->data;
    // cout << head->next->next->next->next->next->data << endl;

    cout << "Starting node of loop is ";
    cout << loopstart(head)->data << endl;
    removeloop(head);
    print(head);
    return 0;
}