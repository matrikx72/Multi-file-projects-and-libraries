#pragma once
class Counter
{
private:

	int num;
public:
    Counter();
    Counter(int init);
    void increment();
    void decrement();
    int getNum() const;
    

};
