#include "Stack.h"
#include <stdexcept>
#include <sstream>
using namespace std;




Stack::Stack() : top(nullptr), _size(0) {}


Stack::Stack(const Stack& other) : top(nullptr), _size(0) {
    Node* temp = other.top;
    Stack temp_stack;

    while (temp != nullptr) {
        temp_stack.push(temp->data);
        temp = temp->next;
    }

    while (!temp_stack.empty()) {
        push(temp_stack.pop());
    }
}


Stack::Stack(Stack&& other) noexcept : top(other.top), _size(other._size) {
    other.top = nullptr;
    other._size = 0;
}


Stack::Stack(initializer_list<int> init) : top(nullptr), _size(0) {
    for (auto it = init.begin(); it != init.end(); ++it) {
        push(*it);
    }
}


Stack::~Stack() {
    while (!empty()) {
        pop();
    }
}


Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        while (!empty()) {
            pop();
        }

        Node* temp = other.top;
        Stack temp_stack;

        while (temp != nullptr) {
            temp_stack.push(temp->data);
            temp = temp->next;
        }

        while (!temp_stack.empty()) {
            push(temp_stack.pop());
        }
    }
    return *this;
}


Stack& Stack::operator=(Stack&& other) noexcept {
    if (this != &other) {
        while (!empty()) {
            pop();
        }

        top = other.top;
        _size = other._size;

        other.top = nullptr;
        other._size = 0;
    }
    return *this;
}



void Stack::push(int value) {
    Node* new_node = new Node(value);
    new_node->next = top;
    top = new_node;
    _size++;
}


int Stack::pop() {
    if (empty()) {
        throw out_of_range("Stack is empty");
    }

    Node* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    _size--;
    return value;
}


int Stack::peek() const {
    if (empty()) {
        throw out_of_range("Stack is empty");
    }
    return top->data;
}


bool Stack::empty() const {
    return top == nullptr;
}


size_t Stack::size() const {
    return _size;
}


string Stack::ToString() const {
    ostringstream oss;
    Node* current = top;

    oss << "[";
    while (current != nullptr) {
        oss << current->data;
        if (current->next != nullptr) {
            oss << ", ";
        }
        current = current->next;
    }
    oss << "]";

    return oss.str();
}