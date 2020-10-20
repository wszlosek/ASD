#include <iostream>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int l, int m, int r) {

    int n1 = m-l+1, n2 = r-m;
    int left[n1], right[n2];

    for(int i = 0; i<n1; i++)
        left[i] = arr[l+i];
    for(int j = 0; j<n2; j++)
        right[j] = arr[m+1+j];

    int i1 = 0, i2 = 0;
    int k = l;

    while (i1 < n1 && i2 < n2){
        if (left[i1]<=right[i2]){
            arr[k] = left[i1];
            i1++;
        }
        else{
            arr[k] = right[i2];
            i2++;
        }
        k++;
    }

    while (i1 < n1){

        arr[k] = left[i1];
        i1++;
        k++;
    }

    while (i2 < n2){

        arr[k] = right[i2];
        i2++;
        k++;
    }
}

void mergeSort(int arr[], int p, int r){

    if (p < r){
        int q = (p+r) / 2;

        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);

        merge(arr, p, q, r);
    }
}

void print(int arr[], int n){

    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
}

int main() {

    srand(time(NULL));

    int arr[33];
    for(int i=0;i<33;i++){
        arr[i] = rand()%100-100;
    }
    print(arr,33);
    mergeSort(arr,0,32);
    print(arr,33);

    return 0;
}