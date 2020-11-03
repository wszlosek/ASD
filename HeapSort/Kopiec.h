//
// Created by Wojciech Szlosek on 03/11/2020.
//

#ifndef HEAPSORT_KOPIEC_H
#define HEAPSORT_KOPIEC_H


class Kopiec {

public:

    int *arr = new int[0];
    int n = 0;

    Kopiec();
    void sort();
    void print();
    void fill();
    void test();
    bool verification();

    void heapify(int n1, int i);
    void buildHeap();
    ~Kopiec();
};


#endif //HEAPSORT_KOPIEC_H
