#include <iostream>
#include "InsertionSort.h"

int main() {

    srand(time(NULL));
    InsertionSort q = InsertionSort();

    // print array
    q.print();

    // (array is sorted?)
    q.test();

    // insertion sort
    q.sort();

    // print and test (again)
    q.print();
    q.test();

    return 0;
}
