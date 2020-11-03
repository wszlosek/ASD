//
// Created by Wojciech Szlosek on 03/11/2020.
//

#include "Kopiec.h"
#include <iostream>
#include <cstdlib> // rand()

Kopiec::Kopiec() { // random elements ( rand() )

    fill();
}

void Kopiec::buildHeap(){

    for(int i=n/2; i>=0; i--){ // lub: int i=(n>>1)
        heapify(n, i);
    }
}

void Kopiec::heapify(int heapSize, int i){

    int lar = i; // najwiekszy
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l<heapSize && arr[l]>arr[lar])
        lar = l;

    if (r<heapSize && arr[r]>arr[lar])
        lar = r;

    if (lar!=i){
        std::swap(arr[i], arr[lar]);
        heapify(heapSize, lar);
    }
}

void Kopiec::sort(){

    buildHeap();

    for(int i=n-1; i>0; i--){
        std::swap(arr[0], arr[i]);
        heapify(i, 0);
    }
}

void Kopiec::print() {

    for(int i=0;i<n;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

bool Kopiec::verification() {

    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1])
            return false;
    }

    return true;
}

void Kopiec::fill(){

    n = 15; // len(arr) = 15

    for(int i=0;i<n;i++)
        arr[i] = rand()%1000 + 1;   // each element in the range 1 to 1000
}


void Kopiec::test() {

    if(verification())
        std::cout << "TEST ZALICZONY POMYSLNIE" << std::endl;
    else
        std::cout << "TEST NIEZALICZONY!" << std::endl;
}


Kopiec::~Kopiec() {

    delete arr;
}

