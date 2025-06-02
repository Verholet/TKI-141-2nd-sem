#pragma once
#include <initializer_list>
#include <string>


class Stack {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* top;
    size_t _size;

public:
   
    Stack();
    Stack(const Stack& other);
    Stack(Stack&& other) noexcept;
    Stack(std::initializer_list<int> init);
    ~Stack();

    Stack& operator=(const Stack& other);
    Stack& operator=(Stack&& other) noexcept;
    void push(int value);
    int pop();
    int peek() const;
    bool empty() const;
    size_t size() const;
    std::string ToString() const;
};