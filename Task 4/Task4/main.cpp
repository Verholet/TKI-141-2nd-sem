#include <iostream>
#include "../Library/Stack.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Stack stack = { 5, 10, 15 };
    cout << stack.ToString() << endl;
    stack.push(30);
    cout <<stack.ToString() << endl;

    int value = stack.pop();
    cout <<value << endl;

    cout <<stack.ToString() << endl;

    cout <<stack.peek() << endl;

    cout << stack.empty() << endl;

    Stack stack_2 = stack;

    cout <<stack_2.ToString() << endl;

    Stack stack_3 = move(stack_2);

    cout <<stack_3.ToString() << endl;

    cout << stack_2.empty() << endl;

    cout <<stack.size() << endl;

    return 0;

}