#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory freed for node with data : " << value << endl;
    }
};

void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatPosition(Node *&head, Node *&tail, int position, int d)
{
    // if posittion is first
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    // if position is in between
    Node *temp = head;
    int count = 1;

    while (count < position-1)
    {
        temp = temp->next;
        count++;
    }

    
    // if position is last
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    Node *insertNode = new Node(d);
    insertNode->next = temp->next;
    temp->next = insertNode;
}

void deletenode(Node *&head,Node*&tail, int position)
{
    // if position is 1st
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // if position is after 1st node i.e. in between 2nd to last node
    else
    {

        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        if(tail->next == curr->next){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
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

int main()
{
    Node *node = new Node(20);
    // cout << node->data << endl;
    // cout<<node->next<<endl;
    Node *head = node;
    Node *tail = node;
    // print(head);
    // insertathead(head, 9);
    // // print(head);
    // insertattail(tail, 11);
    // // print(head);
    // insertatPosition(head, tail, 1, 8);
    // // print(head);
    // insertatPosition(head, tail, 4, 12);
    // // print(head);
    // insertatPosition(head, tail, 6, 13);
    // print(head);
    // deletenode(head, 3);
    // print(head);
    // deletenode(head, 5);
    // printheadtail(head);
    insertathead(head,10);
    insertattail(tail,30);
    insertatPosition(head,tail,2,12);
    insertatPosition(head,tail,5,32);
    insertatPosition(head,tail,3,200);
    insertatPosition(head,tail,5,300);
    insertatPosition(head,tail,7,400);
    print(head);
    deletenode(head,tail,1);
    deletenode(head,tail,3);
    deletenode(head,tail,6);
    print(head);
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;
    return 0;
}