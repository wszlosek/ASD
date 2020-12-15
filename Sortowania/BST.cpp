//
// Created by Wojciech Szlosek on 24/11/2020.
//

#include "BST.h"
#include <iostream>

BST::BST(int n){

    data = n;
    l = NULL, r = NULL;
}

BST* BST::minNode(BST* walker){

    BST* k = walker;
    while(k && k->l!=NULL)
        k = k->l;

    return k;
}

BST* BST::Insert(BST* root, int n) {

    if(root == NULL) // na starcie
        return new BST(n); // dodajemy pierwszy człon

    if(n > root->data)
        root->r = Insert(root->r, n); // rekurencyjnie

    else
        root->l = Insert(root->l, n);

    return root;
}

BST* BST::Delete(BST* root, int n) {

    if(root == NULL)
        return root;

    if(n < root->data)
        root->l = Delete(root->l, n);
    else if(n > root->data)
        root->r = Delete(root->r, n);

    else{

        if(root->l == NULL){

            BST* k = root->r;
            free(root);
            return k;
        }

        else if(root->l == NULL){

            BST* k = root->l;
            free(root);
            return k;
        }

        else{

            BST* w = minNode(root->r);
            root->data = w->data;
            root->r = Delete(root->r, w->data);
        }
    }

    return root;
}

BST* BST::Search(BST* root, int n) {

    if(root == NULL || root->data == n)
        return root;

    if(root->data < n)
        return Search(root->r, data);
    else
        return Search(root->l, data);
}

void BST::printInorder(BST * root){

    if(root == NULL)
        return;

    printInorder(root->l);
    std::cout << root->data << " ";
    printInorder(root->r);
}