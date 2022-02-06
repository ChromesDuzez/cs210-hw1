#pragma once
template <typename Object>
class Stack
{
public:
    bool isEmpty() const
    {
        return theList.empty();
    }
    const Object& top() const
    {
        return *theList.end();
    }
    void push(const Object& x)
    {
        theList.push_back(x);
    }
    Object& pop()
    {
        theList.pop_back();
        return *theList.end();
    }
private:
    List<Object> theList;
};