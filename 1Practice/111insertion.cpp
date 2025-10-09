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

void insertathead(linklist *&head, int data)
{
    linklist *temp = new linklist(data);
    temp->next = head;
    head = temp;
}

void insertattail(linklist * & tail,int data)
{

linklist* temp=new linklist (data);

temp->next=tail;
 


}

void print(linklist *&temp)
{
    linklist *head = temp;
    while (head != NULL)
    {
        cout << head->data << " " ;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // linklist *a = new linklist();
    linklist *b = new linklist(5);

    print(b);
    insertathead(b, 12);
    // cout << b->data << endl;
    // cout << b->next<<endl;
    print(b);

    insertathead(b, 17);
    print(b);
    return 0;
}