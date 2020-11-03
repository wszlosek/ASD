//
// Created by Wojciech Szlosek on 03/11/2020.
//

#ifndef HEAPSORT_KOPIEC_H
#define HEAPSORT_KOPIEC_H


class Kopiec {

public:

    int *arr = new int[0];
    int n = 15;

    void heapify(int n1, int i);
    void buildHeap();
    void print();
};


#endif //HEAPSORT_KOPIEC_H