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

void InsertatTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    cout<<"The linked list is : ";
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
    InsertatTail(tail, 12);
    InsertatTail(tail, 15);
    print(head);

    cout << endl;
    return 0;
}