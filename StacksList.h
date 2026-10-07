//
// Created by AkshajKri on 10/6/26.
//

#pragma once
#include "Stack.h"
#include "List.h"

template <typename T>
class StacksList : public Stack<T> {
public:
    void push(T* value) override {
        list_.addFront(value);
    }
    void pop() override {
        list_.deleteFront();
    }
    T* peek() const override {
        return list_.getFront();
    }
    bool isEmpty() const override {
        return list_.isEmpty();
    }
    int size() const override {
        return list_.size();
    }
    void print() const override {
        return list_.print();
    }

private:
    LinkedList<T> list_; // it is not a pointer and not assigned with new so it will be in a stack memory so we dont need a destructor and delete as it will automatically destroy it
};