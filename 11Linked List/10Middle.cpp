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

int getlength(link * head)
{

    if (head->next == NULL)
    {
        return 0;
    }
    int len = 0;
    while (head->next != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

int recur(link *&head) // counting the length using recursion
{

    if (head == NULL)
    {
        return 0;
    }

    return 1 + recur(head->next);
}

int middle(link *&head)
{
    int len = recur(head);
    int mid = (len / 2);
    int loop = 0;
    link *temp = head;

    while (loop < mid)
    {
        temp = temp->next;
        loop++;
    }

    return temp->data;
}

int main()
{
    link *a1 = new link(4);

    link *head = a1;
    insertathead(a1, 6);
    insertathead(a1, 8);
    insertathead(a1, 10);
    cout << "the size of linklist  is " << recur(a1);
    cout << endl;
    recur(a1);

    cout << middle(a1) << endl;
    //  cout<<head->data;
    // cout<<a1->data;
    return 0;
}