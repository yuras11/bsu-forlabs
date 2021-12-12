#pragma once
#include <iostream>
#include <string>
using namespace std;
template<typename T>
class Stack
{
protected:
    enum {MAX = INT_MAX};
    int top_of_stack;
public:
    int size;
    T *st = new T[MAX];
    Stack() : top_of_stack(0), size(0){}
    ~Stack(){ delete[] st; }
    T top()
    {
        if (IsEmpty())
        {
            throw std::runtime_error("Stack is empty");
        }
        return st[top_of_stack];
    }
    void push(T data)
    {
        st[++top_of_stack] = data;
        ++size;
    }
    T pop()
    {
        if (IsEmpty())
        {
            throw std::runtime_error("Stack is empty");
        }
        T data = st[top_of_stack];
        --top_of_stack;
        --size;
        return data;
    }
    bool IsEmpty() { return !size; }
    void print(std::ostream &out)
    {
        for (size_t i = top_of_stack; i > 0; i--)
        {
            out << st[i] << '\n';
        }
    }
    friend T operator<<(Stack<T> &stack, T data) { stack.push(data); }
    friend T operator>>(Stack<T> &stack, T data) { stack.pop(); }
    Stack &operator=(const Stack &stack)
    {
        size = stack.size;
        top_of_stack = stack.top_of_stack;
        for (size_t i = 1; i <= size; i++)
        { st[i] = stack.st[i]; }
        return *this;
    }
    friend bool operator==(const Stack &stack1, const Stack &stack2)
    { return (stack1.size == stack2.size); }
    friend bool operator!=(const Stack &stack1, const Stack &stack2)
    { return !(stack1 == stack2); }
    friend bool operator<(const Stack &stack1, const Stack &stack2)
    { return (stack1.size < stack2.size); }
    friend bool operator<=(const Stack &stack1, const Stack &stack2)
    { return (stack1.size < stack2.size || stack1 == stack2); }
    friend bool operator>(const Stack &stack1, const Stack &stack2)
    { return (stack1.size > stack2.size); }
    friend bool operator>=(const Stack &stack1, const Stack &stack2)
    { return (stack1.size > stack2.size || stack1 == stack2); }
    T &operator[](const int index) { return st[index]; };
};
