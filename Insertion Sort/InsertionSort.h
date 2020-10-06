//
// Created by Wojciech Szlosek on 06/10/2020.
//

#ifndef INSERTION_SORT_INSERTIONSORT_H
#define INSERTION_SORT_INSERTIONSORT_H


class InsertionSort {

private:

    int *arr = new int[0];
    int n = 0; //size

public:

    InsertionSort();
    void sort();
    void print();
    void filling();
    void test();
    bool verification();
    ~InsertionSort();
};

#endif //INSERTION_SORT_INSERTIONSORT_H