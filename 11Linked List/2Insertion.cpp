#include <iostream>
using namespace std;

class linklist
{

public:
    int data;
    linklist *next;

    linklist(int n)
    {
        data = n;
        next = NULL;
    }
};

// insertion at head
void insertathead(linklist *&head, int data)
{
    linklist *temp = new linklist(data);
    temp->next = head;
    head = temp;
}

void insertattail(linklist *&tail, int data)
{

    linklist *temp = new linklist(data);

    tail->next = temp;
    tail = tail->next;      // or it can be written as tail=temp
}
void print(linklist *&head)
{
    linklist *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        head = temp->next;
    }
    cout << endl;
}

int main()
{
    linklist *a = new linklist(7);

    print(a);
    insertathead(a, 12);
    cout << a->data << endl;
    cout << a->next << endl;
    print(a);

    insertathead(a, 17);
    print(a);

    linklist *b = new linklist(5);

    linklist *head = b;           //ye pehle element ko store kara leta hai taaki track na loose ho baki aage koi b connection banta rhe phla element safe rhna cahiye
    linklist *tail = b;
    insertattail(tail, 1);
    print(head);
    insertattail(tail, 2);
    print(head);
    insertattail(tail, 3);
    cout<<"hello";
    print(b);

    return 0;

}

