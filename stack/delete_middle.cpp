#include <iostream>

using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    // Initializing stack
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Destructor to clean up allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push operation
    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    // Peek operation
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            return -1;
        }
    }

    // Check if stack is empty
    bool empty() {
        return top == -1;
    }

    // Get the size of the stack
    int getSize() {
        return top + 1;
    }
};

// Helper function to delete the middle element
void solve(Stack &inputStack, int count, int size) {
    // Base case
    if (count == size / 2) {
        inputStack.pop();
        return;
    }

    // Store the top element and remove it
    int num = inputStack.peek();
    inputStack.pop();

    // Recursive call to reach the middle
    solve(inputStack, count + 1, size);

    // Push the element back after removing the middle
    inputStack.push(num);
}

// Function to delete the middle element from the stack
void deletemiddle(Stack &inputStack, int size) {
    int count = 0;
    solve(inputStack, count, size);
}

int main() {
    Stack inputStack(5);
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);

    int size = inputStack.getSize();
    deletemiddle(inputStack, size);

    // Print the stack after deleting the middle element
    while (!inputStack.empty()) {
        cout << inputStack.peek() << " ";
        inputStack.pop();
    }

    return 0;
}
