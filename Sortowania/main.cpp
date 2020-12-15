#include <iostream>
#include "Sortowania.h"
#include "Kopiec.h"
#include "BST.h"
#include "AVL.h"
#include "CzerwonoCzarne.h"
#include <algorithm>

int main() {

/*
    BST bst = NULL;
    BST* root = NULL;
    root = bst.Insert(root,20);
    bst.Insert(root,30);
    bst.Insert(root,50);
    bst.printInorder(root);
    std::cout << std::endl;
    bst.Delete(root,30);
    bst.printInorder(root);



    AVL *avl = NULL;
    avl = avl->Insert(avl,10);
    avl = avl->Insert(avl,50);
    avl = avl->Insert(avl,80);
    avl = avl->Delete(avl,50);
    avl->printInorder(avl);

*/

    CzerwonoCzarne tr = NULL;
    tr.Insert(2);
    tr.Insert(5);
    tr.Insert(9);
    tr.Insert(10);
    tr.Insert(13);
    tr.Insert(11);

    tr.Delete2(11);
    tr.Inorder2();

   /*
    SORTOWANIA

    srand(time(NULL));

    int size = 15;
    Sortowania arr = Sortowania(size);
    Sortowania arr2 = Sortowania(size);
    Sortowania arr3 = Sortowania(size);
    Kopiec k1 = Kopiec();

    arr.n = size;
    arr2.n = size;
    arr3.n = size;


    // heapSort
    k1.arr = arr.arr;
    k1.print();
    arr.heapSort(k1);
    k1.print();
    arr.arr = k1.arr;
    arr.test();

    // insertionSort
    arr2.print();
    arr2.insertionSort();
    arr2.print();
    arr2.test();

    // mergeSort
    arr3.print();
    arr3.mergeSort(0,arr3.n-1);
    arr3.print();
    arr3.test();
    */


}
