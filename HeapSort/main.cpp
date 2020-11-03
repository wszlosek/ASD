#include <iostream>
#include "Kopiec.h"

int main() {

    srand(time(NULL));
    Kopiec q = Kopiec();


    q.print();
    // heap sort
    q.sort();

    // print and test (again)
    q.print();
    q.test();

    return 0;
}