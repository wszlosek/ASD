//
// Created by Wojciech Szlosek on 24/11/2020.
//

#include "AVL.h"
#include <iostream>


int AVL::height(AVL* w){

    if(w == NULL)
        return 0;

    return w->h;
}

AVL* AVL::NewN(int n){

    AVL* w = new AVL();
    w->data = n;
    w->l = NULL, w->r = NULL;
    w->h = 1;
    return w;
}

AVL* AVL::leftleftRotation(AVL* w){

    AVL* w1 = w->r;
    AVL* w2 = w1->l;

    w1->l = w;
    w->r = w2;

    if(height(w->l) > height(w->r))
        w->h = height(w->l) + 1;
    else
        w->h = height(w->r) + 1;

    if(height(w1->l) > height(w1->r))
        w1->h = height(w1->l) + 1;
    else
        w1->h = height(w1->r) + 1;

    return w1;
}

AVL* AVL::rightrightRotation(AVL* w){

    AVL* w1 = w->l;
    AVL* w2 = w1->r;

    w1->r = w;
    w->l = w2;

    if(height(w->l) > height(w->r))
        w->h = height(w->l) + 1;
    else
        w->h = height(w->r) + 1;

    if(height(w1->l) > height(w1->r))
        w1->h = height(w1->l) + 1;
    else
        w1->h = height(w1->r) + 1;

    return w1;
}

AVL* AVL::leftrightRotation(AVL* w){

    AVL* w1;
    w1 = w->l;
    w->l = rightrightRotation(w1);
    return leftleftRotation(w);
}

AVL* AVL::rightleftRotation(AVL* w){

    AVL* w1;
    w1 = w->r;
    w->r = leftleftRotation(w1);
    return rightrightRotation(w);
}

AVL* AVL::Insert(AVL* w, int n){

    if(w == NULL){
        return(NewN(n));
    }

    if(n < w->data)
        w->l = Insert(w->l, n);
    else if(n > w->data)
        w->r = Insert(w->r, n);
    else
        return w;

    w->h = 1;

    if(height(w->l)>height(w->r))
        w->h = w->h + height(w->l);
    else
        w->h = w->h + height(w->r);

    int b = Balance(w);

    if(b>1 && n < w->l->data)
        return rightrightRotation(w);
    if(b<-1 && n > w->r->data)
        return leftleftRotation(w);
    if(b>1 && n > w->l->data){
        w->l = leftleftRotation(w->l);
        return rightrightRotation(w);
    }
    if(b<-1 && n < w->r->data){
        w->r = rightrightRotation(w->r);
        return leftleftRotation(w);
    }

    return w;
}

int AVL::Difference(AVL* w){

    int L = height(w->l);
    int R = height(w->r);
    return (L-R);
}

int AVL::Balance(AVL* w){

  if(w == NULL)
      return 0;
  return height(w->l)-height(w->r);
}

AVL* AVL::minNode(AVL* w) {

    AVL* n = w;
    while(n->l != NULL)
        n = n->l;
    return n;
}

AVL* AVL::Delete(AVL* w, int n) {

    if(w == NULL)
        return w;
    if(n < w->data)
        w->l = Delete(w->l, n);
    else if(n > w->data)
        w->r = Delete(w->r, n);
    else{

        if((w->l == NULL) || (w->r == NULL)){ // 0 lub 1 dziecko

            AVL *walker;
            if(w->l)
                walker = w->l;
            else
                walker = w->r;

            if(walker == NULL){

                walker = w;
                w = NULL;
            }
            else
                *w = *walker;
            free(walker);
        }

        else{

            AVL* walk = minNode(w->r);
            w->data = walk->data;
            w->r = Delete(w->r, walk->data);
        }
    }

    if(w == NULL)
        return w;
    w->h = 1;
    if(height(w->l)>height(w->r))
        w->h = w->h + height(w->l);
    else
        w->h = w->h + height(w->r);

    int b = Balance(w);

    if(b>1 && Balance(w->l)>=0)
        return rightrightRotation(w);
    if(b>1 && Balance(w->l)<0){
        w->l = leftleftRotation(w->l);
        return rightrightRotation(w);
    }
    if(b<-1 && Balance(w->r)<=0)
        return leftleftRotation(w);
    if(b<-1 && Balance(w->r)>0){
        w->r = rightrightRotation(w->r);
        return leftleftRotation(w);
    }

    return w;
}

void AVL::printInorder(AVL* w){

    if(w == NULL)
        return;
    printInorder(w->l);
    std::cout << w->data << " ";
    printInorder(w->r);
}