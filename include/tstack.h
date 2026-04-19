// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>

template<typename T, int Size>
class TStack {
 private:
    T arr[Size];
    int top;
 public:
    TStack() :top(-1) {}
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top == Size - 1;
    }
    T get() const {
        if (!isEmpty())
            return arr[top];
    }
    void Pop() {
        if (!isEmpty())
            top--;
    }
    void Push(T item) {
        if (!isFull())
            arr[++top] = item;
    }
};

#endif  // INCLUDE_TSTACK_H_
