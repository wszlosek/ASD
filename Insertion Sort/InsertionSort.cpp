//
// Created by Wojciech Szlosek on 06/10/2020.
//

#include <iostream>
#include <cstdlib> // do funkcji rand() - losowanie liczb do testow
#include "InsertionSort.h"

InsertionSort::InsertionSort() { // random elements ( rand() )

    n = rand()%30 + 1;  // size of arr in the range 1 to 30

    for(int i=0;i<n;i++)
        arr[i] = rand()%1000 + 1;   // each element in the range 1 to 1000

}

void InsertionSort::sort() {

    int el, i;

    for(int j=1;j<n;j++){

        el = arr[j];
        i = j-1;

        while(i>=0 && arr[i] > el){

            arr[i+1] = arr[i];
            i--;
        }

        arr[i+1] = el;
    }
}

void InsertionSort::print() {

    for(int i=0;i<n;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

bool InsertionSort::verification() {

    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1])
            return false;
    }

    return true;
}


void InsertionSort::test() {

    if(verification())
        std::cout << "TEST ZALICZONY POMYSLNIE" << std::endl;
    else
        std::cout << "TEST NIEZALICZONY!" << std::endl;
}

InsertionSort::~InsertionSort() {

    delete arr;
}
