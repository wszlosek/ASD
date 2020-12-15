//
// Created by Wojciech Szlosek on 05/12/2020.
//

#ifndef SORTOWANIA_CZERWONOCZARNE_H
#define SORTOWANIA_CZERWONOCZARNE_H
#include "BST.h"


class CzerwonoCzarne{

public:

    enum Color {Red, Black};
    bool color;
    int data;
    CzerwonoCzarne *root;
    CzerwonoCzarne *r, *l;
    CzerwonoCzarne *parent;
    CzerwonoCzarne(int n);
    CzerwonoCzarne *Search(int n);
    void RotateLeft(CzerwonoCzarne*&, CzerwonoCzarne*&);
    void RotateRight(CzerwonoCzarne*&, CzerwonoCzarne*&);
    void Insert(int);
    CzerwonoCzarne* Insert2(CzerwonoCzarne*, CzerwonoCzarne*);
    void Inorder(CzerwonoCzarne *);
    void Inorder2();
    void swap(CzerwonoCzarne*, CzerwonoCzarne*);
    CzerwonoCzarne* fix(CzerwonoCzarne*&,CzerwonoCzarne*&);
    CzerwonoCzarne *Insert2(CzerwonoCzarne *pom);

    //delete:

    CzerwonoCzarne* Replace(CzerwonoCzarne*);
    void Delete(CzerwonoCzarne*);
    void DoubleBlack(CzerwonoCzarne*);
    void Delete2(int);

};


#endif //SORTOWANIA_CZERWONOCZARNE_H
