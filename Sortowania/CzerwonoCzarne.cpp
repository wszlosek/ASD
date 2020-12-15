//
// Created by Wojciech Szlosek on 05/12/2020.
//

#include "CzerwonoCzarne.h"
#include <iostream>

CzerwonoCzarne::CzerwonoCzarne(int n){

    color = Red;
    parent = NULL;
    r = NULL;
    l = NULL;
    data = n;
}

void CzerwonoCzarne::swap(CzerwonoCzarne *a1, CzerwonoCzarne *a2){

    int w = a1->data;
    a1->data = a2->data;
    a2->data = w;
}

CzerwonoCzarne * CzerwonoCzarne::Search(int n) {

    CzerwonoCzarne* walker = root;
    while(walker!=NULL){

        if(n<walker->data){
            if(walker->l==NULL)
                break;
            else
                walker = walker->l;
        }
        else if(n==walker->data)
            break;
        else{
            if(walker->r==NULL)
                break;
            else
                walker = walker->r;
        }
    }

    return walker;
}

void CzerwonoCzarne::RotateLeft(CzerwonoCzarne *&root, CzerwonoCzarne *&r2) {

    CzerwonoCzarne* pom = r2->r;
    r2->r = pom->l;

    if(r2->r != NULL)
        r2->r->parent = r2;

    pom->parent = r2->parent;

    if(r2->parent==NULL)
        root = pom;
    else if(r2==r2->parent->l)
        r2->parent->l = pom;
    else
        r2->parent->r = pom;
    pom->l = r2;
    r2->parent = pom;
}

void CzerwonoCzarne::RotateRight(CzerwonoCzarne *&root, CzerwonoCzarne *&r2) {

    CzerwonoCzarne* pom = r2->l;
    r2->l = pom->r;

    if(r2->l != NULL)
        r2->l->parent = r2;

    pom->parent = r2->parent;

    if(r2->parent==NULL)
        root = pom;
    else if(r2==r2->parent->l)
        r2->parent->l = pom;
    else
        r2->parent->r = pom;
    pom->r = r2;
    r2->parent = pom;
}

CzerwonoCzarne * CzerwonoCzarne::Insert2(CzerwonoCzarne* root, CzerwonoCzarne* pom) {

    if(root == NULL)
        return pom;
    if(root->data > pom->data){

        root->l = Insert2(root->l, pom);
        root->l->parent = root;
    }
    else if(root->data < pom->data){
        root->r = Insert2(root->r,pom);
        root->r->parent = root;
    }

    return root;
}

void CzerwonoCzarne::Insert(int n) {

    CzerwonoCzarne *pom = new CzerwonoCzarne(n);
    root = CzerwonoCzarne::Insert2(root, pom);
    fix(root,pom);
}

void CzerwonoCzarne::Inorder(CzerwonoCzarne* root) {

    if(root==NULL)
        return;

    Inorder(root->l);
    std::cout << root->data << " ";
    Inorder(root->r);

}

CzerwonoCzarne * CzerwonoCzarne::fix(CzerwonoCzarne* &root, CzerwonoCzarne *&pom) {

    CzerwonoCzarne *parent = NULL;
    CzerwonoCzarne *praparent = NULL;


        while ((pom != root) && (pom->color != Black) && (pom->parent->color == Red)) {

            parent = pom->parent;
            praparent = pom->parent->parent;

            if (praparent->l == parent) {

                CzerwonoCzarne *walker = praparent->r;

                if (walker != NULL && walker->color == Red) {

                    praparent->color = Red;
                    parent->color = Black, walker->color = Black;
                    pom = praparent;
                } else {

                    if (pom == parent->r) {
                        RotateLeft(root, parent);
                        pom = parent;
                        parent = pom->parent;
                    }

                    RotateRight(root, praparent);
                    auto s1 = praparent->color;
                    praparent->color = parent->color;
                    parent->color = s1;
                    pom = parent;
                }
            } else {

                CzerwonoCzarne *walker = praparent->l;

                if ((walker != NULL) && (walker->color == Red)) {

                    praparent->color = Red;
                    parent->color = Black, walker->color = Black;
                    pom = praparent;
                } else {

                    if (pom == parent->l) {

                        RotateRight(root, parent);
                        pom = parent;
                        parent = pom->parent;
                    }

                    RotateLeft(root, praparent);
                    auto s1 = parent->color;
                    parent->color = praparent->color;
                    praparent->color = s1;
                    pom = parent;
                }
            }

        }

        root->color = Black;

}

void CzerwonoCzarne::Inorder2() {

    Inorder(root);
}

// ------- delete --------

CzerwonoCzarne * CzerwonoCzarne::Replace(CzerwonoCzarne *w) {

    if(w->l==NULL && w->r==NULL)
        return NULL;

    else if(w->l != NULL && w->r!=NULL){

        CzerwonoCzarne *walker = w->r;
        while(walker->l !=NULL)
            walker = walker->l;
        return walker;
    }

    else{

        if(w->l == NULL){
            return w->r;
        }

        return w->l;
    }
}

void CzerwonoCzarne::DoubleBlack(CzerwonoCzarne *walker) {

    if(walker == root)
        return;

    CzerwonoCzarne *s;
    if(walker->parent == NULL)
        s = NULL;
    else if(walker->parent->l)
        s = walker->parent->r;
    else
        s = walker->parent->l;

    CzerwonoCzarne *parent = walker->parent;
    if(s == NULL)
        DoubleBlack(parent);
    else if(s->color == Red){
        parent->color = Red;
        s->color = Black;
        if(s->parent->l)
            RotateRight(parent,parent->l);
        else
            RotateLeft(parent, parent->l);

        DoubleBlack(walker);
    }

    else{

        if((s->l!=NULL && s->l->color==Red) ||(s->r!=NULL && s->r->color==Red)){

            if(s->l!=NULL && s->l->color==Red){
                if(s->parent->l){
                    s->l->color = s->color;
                    s->color = parent->color;
                    RotateRight(parent, parent->l);
                }
                else{
                    s->l->color = parent->color;
                    RotateRight(s,s->l);
                    RotateLeft(parent, parent->l);
                }
            }
            else{

                if(s->parent->l){
                    s->r->color = parent->color;
                    RotateLeft(s,s->l);
                    RotateRight(parent, parent->l);
                }

                else{
                    s->r->color = s->color;
                    s->color = parent-> color;
                    RotateLeft(parent, parent->l);
                }
            }
            parent->color = Black;
        }

        else{
            s->color = Red;
            if(parent->color == Black)
                DoubleBlack(parent);
            else
                parent->color = Black;
        }
    }
}
void CzerwonoCzarne::Delete(CzerwonoCzarne* walker){

    CzerwonoCzarne *n = CzerwonoCzarne::Replace(walker);
    CzerwonoCzarne *parent = walker->parent;

    if(n==NULL){

        if(walker == root){
            root = NULL;
        }
        else {
            if ((n == NULL || n->color == Black) && walker->color == Black) {
                DoubleBlack(walker);
            } else if (!(walker->parent == NULL || (walker->parent->l && walker->parent->r == NULL) ||
                         walker->parent->l == NULL))
                walker->color = Red;

            if (walker->parent->l)
                parent->l = NULL;
            else
                parent->r = NULL;
        }

        delete walker;
        return;
    }

    if(walker->l == NULL || walker->r == NULL){

        if(walker == root){
            walker->data = n->data;
            walker->l = walker->r = NULL;
            delete n;
        }

        else{

            if(walker->parent->l)
                parent->l = n;
            else
                parent->r = n;
            delete walker;

            n->parent = parent;
            if((n == NULL || n->color == Black) && (walker->color == Black))
                DoubleBlack(n);
            else
                n->color = Black;

        }

        return;
    }

    swap(n,walker);
    Delete(n);
}

void CzerwonoCzarne::Delete2(int n) {

    if(root==NULL)
        return;
    CzerwonoCzarne *walker = Search(n);

    if(walker->data != n)
        return;
    Delete(walker);
}

