//
// Created by Wojciech Szlosek on 24/11/2020.
//

#ifndef SORTOWANIA_AVL_H
#define SORTOWANIA_AVL_H
#include <iostream>

class AVL{

public:

    int data;
    int h;
    AVL *l, *r;

    int height(AVL*);
    AVL* NewN(int n);
    AVL* Insert(AVL*, int n);
    int Difference(AVL*); // roznica
    int Balance(AVL*);
    AVL* rightrightRotation(AVL*);
    AVL* leftleftRotation(AVL*);
    AVL* leftrightRotation(AVL*);
    AVL* rightleftRotation(AVL*);
    AVL* minNode(AVL*);
    AVL* Delete(AVL*, int n);
    void printInorder(AVL*);
};


#endif //SORTOWANIA_AVL_H
