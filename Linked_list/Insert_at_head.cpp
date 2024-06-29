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

void Insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
    Insertathead(head, 12);
    Insertathead(head, 15);
    print(head);

    cout << endl;
    return 0;
}