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

void insertattail(link *&tail, int data)
{
    link *temp = new link(data);
    tail->next = temp;
    tail = temp;
}

void insertinmiddle(link *&tail, link *&head, int position, int data)
{
    // insert at start
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
    
    // inseting at last position
    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }
    // creating a node for insertion of d
    link *nodetoinsert = new link(data);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
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

    link *a = new link(4);

    link *head = a;
    link *tail = a;
    insertattail(tail, 12);
    print(head);
    insertattail(tail, 5);
    print(head);
    insertinmiddle(tail, head, 4, 8);
    print(head);
  
    print(tail);         //this will print 8 i.e. the last element
    print(a);            //this and  print(head); will print the same output 

    cout << "head is " << head << endl;
    cout << "tail is " << tail << endl;
    return 0;
}