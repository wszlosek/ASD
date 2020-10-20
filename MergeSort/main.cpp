#include <iostream>
#include "MergeSort.h"

int main() {

    srand(time(NULL));
    MergeSort q = MergeSort();


    q.fill();   // new random elements
    q.print();
    // merge sort
    q.sort(0,q.n-1);

    // print and test (again)
    q.print();
    q.test();

    return 0;
}