#include <iostream>
using namespace std;

class lol
{

public:
    int data;
    lol *next;

    lol(int d)
    {
        data = d;
        next = NULL;
    }

    ~lol()

    {
        int value = data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertnode(lol *&tail, int element, int data)
{
    // case 1 : is list is empty
    if (tail == NULL)
    {
        lol *temp = new lol(data);
        tail = temp;
        temp->next = temp;
    }
    else
    {

        // non empty list
        // asssuming that the element is prsent in list
        lol *curr = tail;

        if (curr->data != element)
        {
            curr = curr->next;
        }

        // now we found the element and curr is on it
        lol *tempo = new lol(data);
        tempo->next = curr->next;
        curr->next = tempo;
    }
}

void deletion(lol *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "bhadwe check kr dobara" << endl;
        return;
    }
    // non empty
    else
    {
        // assuming the element is prsent in LL
        lol *prev = tail;
        lol *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // for one node
        if (curr == prev)
        {
            tail = NULL;
            cout << "abe laude poori linklist del kr di hai tune " << endl;
        }

        // this condition is important because the tail would have been pointing at the start and curr del hone vala hai to tail ko kisi aur ko point kra lo
        // for more than one node
        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(lol *&tail)
{
    lol *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

// void print(lol *&temp)
// {
//     lol *head = temp;
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

int main()

{
    lol *tail = NULL;
    insertnode(tail, 0, 1);
    print(tail);
    insertnode(tail, 1, 2);
    print(tail);
    insertnode(tail, 2, 3);
    print(tail);
    insertnode(tail, 2, 4);
    print(tail);

    // deletion(tail, 1);
    print(tail);
    cout<<endl;
    cout<<tail->data;
    cout<<tail->next->data;
    cout<<tail->next->next->data;
    cout<<tail->next->next->next->data;
    cout<<tail->next->next->next->next->data;
    
    return 0;
}
