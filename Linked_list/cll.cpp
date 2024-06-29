#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
    }
};

void insertnode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // assuming element is present in list iteratu=ing until element is found
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found - curr represents element
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int value)
{
    // if the list is empty
    if (tail == NULL)
    {
        cout << "List is empty, cannot be deleted" << endl;
    }

    // if List is not empty
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        //if there is only 1 node
        if(prev == curr){
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    Node *tail = NULL;
    insertnode(tail, 5, 3);
    insertnode(tail, 3, 5);
    insertnode(tail, 5, 7);
    insertnode(tail, 7, 9);
    insertnode(tail, 5, 6);
    print(tail);
    deleteNode(tail, 6);
    deleteNode(tail, 3);
    deleteNode(tail, 9);
    deleteNode(tail, 7);  
    
    insertnode(tail, 5, 6);
    print(tail);
}