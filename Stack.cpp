#include "Stack.h"
#include <iostream>

template <typename T>
Stack<T>::Stack() : topIndex(-1)
{
}

template <typename T>
Stack<T>::~Stack()
{
}

template <typename T>
void Stack<T>::push(const T &value)
{
    if (topIndex == MAX_SIZE - 1)
    {
        std::cerr << "Stack overflow: Unable to push element onto a full stack." << std::endl;
        return;
    }
    elements[++topIndex] = value;
}

template <typename T>
void Stack<T>::pop()
{
    if (topIndex == -1)
    {
        std::cerr << "Stack underflow: Unable to pop element from an empty stack." << std::endl;
        return;
    }
    topIndex -= 1;
}

template <typename T>
T Stack<T>::top() const
{
    if (this->isEmpty() == true)
    {
        std::cerr << "Stack is Empty: Unable to get the top element." << std::endl;
        return T();
    }
    return elements[topIndex];
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return (topIndex == -1);
}

template <typename T>
int Stack<T>::size() const
{
    return topIndex + 1;
}
