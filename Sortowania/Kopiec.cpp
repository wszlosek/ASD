//
// Created by Wojciech Szlosek on 03/11/2020.
//

#include <iostream>
#include "Kopiec.h"

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

void Kopiec::print(){

    for(int i=0; i<n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
