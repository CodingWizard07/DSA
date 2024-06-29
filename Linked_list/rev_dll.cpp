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

Node* reverse(Node* head) {
    // Empty list or single node, no reversal needed
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node *curr = head;
    Node *temp = NULL;
    while (curr != NULL) {
        // Swap prev and next pointers
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        
        // Move to the next node
        curr = curr->prev;
    }
    return temp->prev; // new head
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Doubly linked list before Reversing : " << endl;
    insertathead(head, tail, 1);
    insertattail(head, tail, 2);
    insertattail(head, tail, 3);
    insertattail(head, tail, 4);
    insertattail(head, tail, 5);
    print(head);
    cout << "Doubly linked list after Reversing : " << endl;
    head = reverse(head);
    print(head);
}