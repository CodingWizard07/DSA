#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertatHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertatTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertatPosition(Node *&head, Node *&tail, int position, int d)
{
    // if posittion is first
    if (position == 1)
    {
        InsertatHead(head, d);
        return;
    }

    // if position is in between
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *insertNode = new Node(d);
    insertNode->next = temp->next;
    temp->next = insertNode;
    // if position is last
    if (temp->next == NULL)
    {
        InsertatTail(tail, d);
        return;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    cout << "The linked list is : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node = new Node(10);
    // cout << node->data << " ";
    // cout << node->next << " ";
    Node *head = node;
    Node *tail = node;
    InsertatHead(head,9);
    InsertatTail(tail,12);
    InsertatPosition(head,tail,3,11);
    print(head);

    cout << endl;
    return 0;
}