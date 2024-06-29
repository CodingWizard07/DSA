#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // CONSTRUCTOR
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // DESTRUCTOR
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory freed for node with value : " << value << endl;
    }
};

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Recursion
void reverseLL(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    // recursion
    Node *forward = curr->next;
    reverseLL(head, forward, curr);
    curr->next = prev;
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    reverseLL(head, curr, prev);
    return head;
}

Node *reverse1(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // recursion part
    Node *newhead = reverse1(head->next);

    // Fixing the 1st head
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
int main()
{
    Node *node = new Node(1);
    Node *head = node;
    Node *tail = node;
    insertattail(tail, 2);
    insertattail(tail, 3);
    insertattail(tail, 4);
    insertattail(tail, -1);

    cout << "Original linked list: ";
    print(head);
    // recursion 1
    //  head = reverse(head);

    // cout << "Reversed linked list: ";
    // print(head);

    // recursion 1
    head = reverse1(head);

    cout << "Reversed linked list: ";
    print(head);
    
    return 0;
}
