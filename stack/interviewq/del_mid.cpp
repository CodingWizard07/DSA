#include<iostream>
#include<stack>
using namespace std;

int result(stack<int>& inputstack, int size, int count) {
    // Base case
    if(count == size/2) {
        int deleted_element = inputstack.top();
        inputstack.pop();
        return deleted_element;
    }

    int num = inputstack.top();
    inputstack.pop();
    // Recursion part
    int deleted_element = result(inputstack, size, count+1);
    inputstack.push(num);

    return deleted_element;
}

int delete_mid(stack<int>& inputstack, int N) {
    int count = 0;
    return result(inputstack, N, count);
}

int main() {
    // Create a stack
    stack<int> myStack;

    // Push some elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(5);

    // Call delete_mid function to delete the middle element and print it
    int deleted_element = delete_mid(myStack, 5);
    cout << "Deleted element - " << deleted_element << endl;

    return 0;
}
