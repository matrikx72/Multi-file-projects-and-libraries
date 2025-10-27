#include <iostream>
#include<string>
#include"Class.h"

    Counter::Counter() : num(1) {}

    Counter::Counter(int init) : num(init) {}

    void Counter::increment()
    {
        ++num;
    }

    void Counter::decrement()
    {
        --num;
    }

    int Counter::getNum() const
    {
        return num;
    }
