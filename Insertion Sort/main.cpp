#include <iostream>
#include "InsertionSort.h"

int main() {

    srand(time(NULL));
    InsertionSort q = InsertionSort();

    q.filling();
    q.print();
    q.test();

    q.sort();
    q.print();
    q.test();

    return 0;
}
