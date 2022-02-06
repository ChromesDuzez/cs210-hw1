#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return theList.empty();
    }
    const Object& getFront() const
    {
        return *theList.begin();
    }
    void enqueue(const Object& x)
    {
        theList.push_back(x);
    }
    Object& dequeue()
    {
        const Object& front = theList.front();
        Object popped = front;
        theList.pop_front();
        return popped;
    }
private:
    List<Object> theList;
};
