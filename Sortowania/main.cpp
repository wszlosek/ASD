#include <iostream>
#include "Sortowania.h"
#include "Kopiec.h"
#include <algorithm>

int main() {

    srand(time(NULL));

    Sortowania arr = Sortowania();
    Kopiec k1 = Kopiec();

    k1.arr = arr.arr;
    k1.print();
    arr.heapSort(k1);
    k1.print();
    arr.arr = k1.arr;
    arr.test();
}
