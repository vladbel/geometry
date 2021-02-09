#ifndef SORT_H
#define SORT_H

class SortInterface
{
private:
protected:
public:
    SortInterface(){};
    virtual ~SortInterface(){};
    virtual void sort() = 0;
};

class HeapSort : public SortInterface
{
private:
protected:
public:
    HeapSort();
    ~HeapSort();
    void sort();
};

#endif