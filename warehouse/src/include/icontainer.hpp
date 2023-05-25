#pragma once
#include <iostream>

class IContainer{
    public:
    // Functions
        virtual bool isEmpty() const = 0;
        virtual bool isFull() const = 0;
};