//
// Created by Wojciech Szlosek on 03/11/2020.
//

#ifndef SORTOWANIA_SORTOWANIA_H
#define SORTOWANIA_SORTOWANIA_H
#include "Kopiec.h"

class Sortowania {

public:

    int n = 0;
    int *arr;

    Sortowania(int n);
    void mergeSort(int q, int w);
    void heapSort(Kopiec f);
    void insertionSort();
    void print();
    void fill(int n);
    void test();
    bool verification();
    ~Sortowania();
};


#endif //SORTOWANIA_SORTOWANIA_H
