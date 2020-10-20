//
// Created by Wojciech Szlosek on 20/10/2020.
//
class MergeSort {

public:

    int *arr = new int[0];
    int n = 0;

    MergeSort();
    void sort(int q, int w);
    void print();
    void fill();
    void test();
    bool verification();
    ~MergeSort();
};
