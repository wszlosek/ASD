#include <iostream>
#include "Sortowania.h"
#include "Kopiec.h"
#include <algorithm>

int main() {

    srand(time(NULL));

    Sortowania arr = Sortowania();
    Sortowania arr2 = Sortowania();
    Sortowania arr3 = Sortowania();
    Kopiec k1 = Kopiec();

    for(int i=0; i<arr.n;i++){
        arr2.arr[i] = arr.arr[i];
        arr3.arr[i] = arr.arr[i];
    }

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
