#include "sort.hpp"

#include <cstdlib>
#include <iostream>

int main()
{
    SortInterface* sort = new HeapSort();
    sort->sort();
    delete(sort);
}