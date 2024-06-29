#include <iostream>
using namespace std;

class Stack
{
public:
    int data;
    Stack *next;
    Stack *prev;

    Stack(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Stack()
    {
        int value = this->data;
        if (this->next == NULL)
        {
            delete next;
            this->next == NULL;
        }
        cout << "Memory freed for node with data : " << value << endl;
    }
};

void push(Stack *&tail, int data)
{
    if (tail->next == NULL)
    {
        Stack *temp = new Stack(data);
        tail->next = temp;
        tail = temp;
    }
}

void pop(Stack *&head, Stack *&tail)
{
    if (head ->next != NULL)
    {
        Stack *curr = head;
        Stack *prev = NULL;
        while (curr != tail)
        {
            prev = curr;
            curr = curr->next;
        }
        tail = prev;
        prev->next = NULL;
        delete curr;
    }
    else
    {
        cout<<"Stack Underflow !!"<<endl;
    }
}

int peek(Stack *&tail){
    return tail->data;
}
void print(Stack *&head)
{
    Stack *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    //a starting node 
    Stack *node = new Stack(0);
    Stack *head = node;
    Stack *tail = node;
    print(head);
    push(tail,10);
    cout<<"Topmost element : "<<peek(tail)<<endl;
    push(tail,20);
    cout<<"Topmost element : "<<peek(tail)<<endl;
    push(tail,30);
    cout<<"Topmost element : "<<peek(tail)<<endl;
    push(tail,40);
    cout<<"Topmost element : "<<peek(tail)<<endl;
    print(head);
    pop(head,tail);
    cout<<"Topmost element : "<<peek(tail)<<endl;
    pop(head,tail);
    pop(head,tail);
    cout<<"Topmost element : "<<peek(tail)<<endl;
    pop(head,tail);
    pop(head,tail);
}