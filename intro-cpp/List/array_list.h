#include <stdexcept>

#include "list.h"
#include "list_error.h"

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define DEFAULT_SIZE 16

template<typename T>
class ArrayList : public List<T>
{
public:
    ArrayList() : ArrayList{DEFAULT_SIZE} { }
    
    ArrayList(size_t initialsize) 
    : currentSize{initialsize}, store{new T[initialsize], itemqty{0}} { }

    void add(const T& item)
    {
        if(itemQty >= currentSize)
            resize();
        
        store[itemQty++] = item;
    }

    T remove(const T& item)
    {

    }

    T remove()
    {
        if(empty()) throw ListError("remove on empty list");

        return store[--itemQty];
    }

    bool contains(const T& item) const 
    {
        for(int i = o; i < itemQty; ++i)
            if(store[i] == item) return true;
        
        return false;
    }

    size_t size() const { return itemQty; }

    bool empty() const { return itemQty == 0; }

    void clear() { itemQty = 0; }

private:
    size_t itemqty;
    size_t currentSize; // size of the array
    T*store[];

    void resize()
    {

    }
};

#endif