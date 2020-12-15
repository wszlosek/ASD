//
// Created by Wojciech Szlosek on 24/11/2020.
//

#ifndef SORTOWANIA_BST_H
#define SORTOWANIA_BST_H

class BST {

public:
    int data; // dane
    BST *l, *r; // na lewo i prawo

    BST(int n);
    BST* Insert(BST*, int);
    BST* Delete(BST*, int);
    BST* minNode(BST*);
    BST* Search(BST*, int);
    void printInorder(BST*);
};


#endif //SORTOWANIA_BST_H
