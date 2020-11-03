#include <iostream>
#include "Sortowania.h"
#include "Kopiec.h"
#include <algorithm>

int main() {

    srand(time(NULL));

    int size = 15;
    Sortowania arr = Sortowania(size);
    Sortowania arr2 = Sortowania(size);
    Sortowania arr3 = Sortowania(size);
    Kopiec k1 = Kopiec();

    arr.n = size;
    arr2.n = size;
    arr3.n = size;


    // heapSort
    k1.arr = arr.arr;
    k1.print();
    arr.heapSort(k1);
    k1.print();
    arr.arr = k1.arr;
    arr.test();

    // insertionSort
    arr2.print();
    arr2.insertionSort();
    arr2.print();
    arr2.test();

    // mergeSort
    arr3.print();
    arr3.mergeSort(0,arr3.n-1);
    arr3.print();
    arr3.test();
}
