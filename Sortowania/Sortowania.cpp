//
// Created by Wojciech Szlosek on 03/11/2020.
//

#include "Sortowania.h"
#include "Kopiec.h"
#include <iostream>

Sortowania::Sortowania() { // random elements ( rand() )

    fill();
}

void Sortowania::insertionSort() {

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

void Sortowania::mergeSort(int p, int r) {

    if(p<r){
        int q = (p+r) / 2;

        Sortowania::mergeSort(p, q);
        Sortowania::mergeSort(q+1, r);

        // scalenie:
        int n1 = q-p+1, n2 = r-q;
        int left[n1], right[n2];

        for(int i = 0; i<n1; i++)   // podzial na lewa i prawa strone tablicy
            left[i] = arr[p+i];
        for(int j = 0; j<n2; j++)
            right[j] = arr[q+1+j];

        int i1 = 0, i2 = 0;
        int k = p;

        while(i1<n1 && i2<n2){
            if(left[i1]<=right[i2]){
                arr[k] = left[i1];
                i1++;
            }
            else{
                arr[k] = right[i2];
                i2++;
            }
            k++;
        }

        while(i1 < n1){

            arr[k] = left[i1];
            i1++;
            k++;
        }

        while(i2 < n2){

            arr[k] = right[i2];
            i2++;
            k++;
        }
    }
}

void Sortowania::heapSort(Kopiec kop) {

    kop.buildHeap();

    for(int i=n-1; i>0; i--){
        std::swap(kop.arr[0],kop.arr[i]);
        kop.heapify(i,0);
    }
}

void Sortowania::print() {

    for(int i=0;i<n;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

bool Sortowania::verification() {

    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1])
            return false;
    }

    return true;
}

void Sortowania::fill(){

    n = 15;  // len(arr) = 15

    for(int i=0;i<n;i++)
        arr[i] = rand()%100 + 1;   // each element in the range 1 to 1000
}


void Sortowania::test() {

    if(verification())
        std::cout << "TEST ZALICZONY POMYSLNIE" << std::endl;
    else
        std::cout << "TEST NIEZALICZONY!" << std::endl;
}

Sortowania::~Sortowania() {
}
