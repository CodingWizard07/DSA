#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freed for node : " << value << endl;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertathead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertatPosition(Node *&head, Node *&tail, int d, int position)
{
    // insert at the beginning
    if (position == 1)
    {
        insertathead(head, tail, d);
        return;
    }
    // inserting at at any other position
    Node *temp = head;
    // Node *temp2 = head->next;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        // temp2 = temp2->next;
        count++;
    }

    // if position is last
    if (temp->next == NULL)
    {
        insertattail(head, tail, d);
        return;
    }

    Node *curr = new Node(d);
    // using 2 temp
    //  curr->prev=temp1;
    //  curr->next=temp2;
    //  temp1->next=curr;
    //  temp2->prev=curr;

    // using one temp only
    curr->next = temp->next;
    temp->next->prev = curr;
    curr->prev = temp;
    temp->next = curr;
}

void deletenode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *previous = NULL;
        int count = 1;
        while (count < position)
        {
            previous = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        previous->next = curr->next;
        
        if (curr->next == NULL)
        {
            tail = previous;
        }
        // curr->next->prev = temp;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertathead(head, tail, 9);
    insertattail(head, tail, 12);
    insertatPosition(head, tail, 11, 2);
    insertatPosition(head, tail, 8, 1);
    insertatPosition(head, tail, 13, 5);
    insertatPosition(head, tail, 10, 3);
    print(head);
    cout << "Head :" << head->data << endl;
    cout << "Tail :" << tail->data << endl;
    // deletenode(head, tail, 1);
    // deletenode(head, tail, 3);
    deletenode(head, tail, 6);
    print(head);
    cout << "Head :" << head->data << endl;
    cout << "Tail :" << tail->data << endl;
    return 0;
}