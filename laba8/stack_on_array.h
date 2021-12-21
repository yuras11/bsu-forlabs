#pragma once
#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Stack{
protected:
    const int GrowsFactor = 10;
    int capacity;
public:
    int size;
    T* st = new T[capacity];
    Stack(): size(0), capacity(5){}
    ~Stack() {delete[] st;}
    void Resize()
    {
        if (size + 1 > capacity)
        {
            T *new_st = new T[capacity + GrowsFactor];
            for (size_t i = 1; i <= size; ++i)
            {
                new_st[i] = st[i];
            }
            capacity += GrowsFactor;
            delete[] st;
            st = new_st;
        }
    }
    T top()
    {
        if(IsEmpty())
        {
            throw std::runtime_error("Stack is empty");
        }
        return st[size];
    }
    void push(T data)
    {
        Resize();
        st[++size] = data;
    }
    T pop()
    {
        if(IsEmpty())
        {
            throw runtime_error("Stack is empty");
        }
        T data = st[size];
        --size;
        return data;
    }
    bool IsEmpty() {return !size;}
    void print(std::ostream &out)
    {
        for(size_t i = size; i > 0; i--)
        {
            out << st[i] << '\n';
        }
    }
    friend T operator<< (Stack<T> &stack, T data) {stack.push(data);}
    friend T operator>> (Stack<T> &stack, T data) {stack.pop();}
    Stack& operator=(const Stack& stack){

        this->size = stack.size;
        for (size_t i = 0; i <= size; i++)
        {
            st[i] = stack.st[i];
        }
        return *this;
    }
    friend bool operator== (const Stack &stack1, const Stack &stack2)
    {return (stack1.size == stack2.size);}
    friend bool operator!= (const Stack &stack1, const Stack &stack2)
    {return !(stack1 == stack2);}
    friend bool operator< (const Stack &stack1, const Stack &stack2)
    {return (stack1.size < stack2.size);}
    friend bool operator<= (const Stack &stack1, const Stack &stack2)
    {return (stack1.size < stack2.size || stack1 == stack2);}
    friend bool operator> (const Stack &stack1, const Stack &stack2)
    {return (stack1.size > stack2.size);}
    friend bool operator>= (const Stack &stack1, const Stack &stack2)
    {return (stack1.size > stack2.size || stack1 == stack2);}
    T& operator[](const int index) {return st[index];};
};
