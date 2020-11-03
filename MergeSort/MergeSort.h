//
// Created by Wojciech Szlosek on 20/10/2020.
//
class Sortowania{

public:

    int *arr = new int[0];
    int n = 0;

    Sortowania();
    void Mergesort(int q, int w);
    void print();
    static void fill();
    void test();
    bool verification();
    ~Sortowania();
};
