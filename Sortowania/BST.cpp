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

    else if(n < root->data)
        root->l = Delete(root->l, n);
    else if(n > root->data)
        root->r = Delete(root->r, n);

    else if(root->l != NULL && root->r != NULL){

        BST* temp = root;
        while (temp->l != NULL)
            temp = temp->l;
        root->data = temp->data;
        root->r = Delete(root->r, root->data);
    }

    else{

        BST* temp = root;
        if (temp->l == NULL)
            root = root->r;
        else if(temp->r == NULL)
            root = root->l;

        delete temp;
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
