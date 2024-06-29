#include <iostream>
#include <cstdlib> // For exit()

using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;

    Stack(int s) {
        this->size = s;
        arr = new int[s]; // Corrected the allocation syntax
        top = -1;
    }

    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
            cout << "Success!! Pushed -> " << element << endl;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
            cout << "Success!! Popped top element." << endl;
        }
        else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1; // Return a default value when stack is empty
        }
    }

    bool isempty() {
        return (top == -1); // Simplified the code
    }
};

int main() {
    Stack st(0); // Initialize with dummy size, will be updated later
    
    while (true) {
        int num;
        cout << "1 -->  Create Stack" << endl;
        cout << "2 -->  Push an element" << endl;
        cout << "3 -->  Pop an element" << endl;
        cout << "4 -->  Topmost element in the stack" << endl;
        cout << "5 -->  Is the stack empty" << endl;
        cout << "6 -->  Exit" << endl;
        cout << "Enter your choice: ";
        cin >> num;

        switch (num) {
            case 1: {
                int s;
                cout << "Enter the size of the stack : ";
                cin >> s;
                st = Stack(s); // Reinitialize the stack with the provided size
                cout << "Success!!" << endl;
                break;
            }
            case 2: {
                int p;
                cout << "Enter the element to push : ";
                cin >> p;
                st.push(p);
                break;
            }
            case 3: {
                st.pop();
                break;
            }
            case 4: {
                cout << "Topmost element -> " << st.peek() << endl;
                break;
            }
            case 5: {
                if (st.isempty()) {
                    cout << "Empty Stack !" << endl;
                } else {
                    cout << "Stack Not empty" << endl;
                }
                break;
            }
            case 6: {
                cout << "Exiting program..." << endl;
                exit(0);
            }
            default:
                cout << "Invalid option !!" << endl;
                break;
        }
    }

    return 0;
}
