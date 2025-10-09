#include <iostream>
using namespace std;

class link
{
public:
    int data;
    link *next;

    link(int n)
    {
        data = n;
        next = NULL;
    }
};

void insertathead(link *&head, int data)
{
    link *temp = new link(data);
    temp->next = head;
    head = temp;
}

link *reverse(link *&head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    link *prev = NULL;
    link *curr = head;
    link *forward = NULL;

    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }

    if (forward != NULL)

    {
        head->next = reverse(forward, k);
    }

    return prev;
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
    link *a1 = new link(2);
    link *head = a1;
    insertathead(head, 4);
    insertathead(head, 5);
    insertathead(head, 6);
    insertathead(head, 7);
    print(head);

    link *store = reverse(head, 2);
    print(store);

    return 0;
}