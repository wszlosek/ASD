//
// Created by Wojciech Szlosek on 20/10/2020.
//

#include "MergeSort.h"
#include <iostream>
#include <cstdlib> // rand()

MergeSort::MergeSort() { // random elements ( rand() )

    fill();
}

void MergeSort::sort(int p, int r){

    if(p<r){
        int q = (p+r) / 2;

        MergeSort::sort(p, q);
        MergeSort::sort(q+1, r);

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

void MergeSort::print() {

    for(int i=0;i<n;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

bool MergeSort::verification() {

    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1])
            return false;
    }

    return true;
}

void MergeSort::fill(){

    n = 15; // len(arr) = 15

    for(int i=0;i<n;i++)
        arr[i] = rand()%1000 + 1;   // each element in the range 1 to 1000
}


void MergeSort::test() {

    if(verification())
        std::cout << "TEST ZALICZONY POMYSLNIE" << std::endl;
    else
        std::cout << "TEST NIEZALICZONY!" << std::endl;
}

MergeSort::~MergeSort() {

    delete arr;
}
