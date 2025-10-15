// this can also work but the better approach is to create the functions inside the class

#include <iostream>
using namespace std;

class stac
{
public:
    int data;
    stac *next;

    stac(int d)
    {
        data = d;
        next = NULL;
    }
};

void push(stac *&head, int d)
{

    stac *temp = new stac(d);
    temp->next = head;
    head = temp;
}

void pop(stac *&head)

{
    if (head == NULL)
    {
        cout << "Stack is underflow" << endl;
        return;
    }

    stac *temp = head;
    head = head->next;
    delete temp;
}
int top(stac *&head)
{
    if (head == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }

    return head->data;
}
int main()
{
    stac *a1 = new stac(4);
    push(a1, 3);
    cout << "The top most element is " << top(a1) << endl;
    push(a1, 4);
    cout << "The top most element is " << top(a1) << endl;
    push(a1, 5);
    cout << "The top most element is " << top(a1) << endl;
    pop(a1);
    cout << "The top most element is " << top(a1) << endl;
    pop(a1);
    cout << "The top most element is " << top(a1) << endl;

    return 0;
}