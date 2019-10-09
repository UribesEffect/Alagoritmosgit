#ifndef __ARBOLESENANOS_HPP
#define __ARBOLESENANOS_HPP
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

template <typename T>
struct BSTNode {
  T key;
  BSTNode *left;
  BSTNode *right;
};


template <typename T>
class BST {
private:
  BSTNode<T> *root;
  void insertNode(BSTNode<T>* &t, T k);
  void destroyRecursive(BSTNode<T> *t);
  void displayNode(BSTNode<T> *t ,int count);
public:
  BST() { root = nullptr; }
  ~BST() {destroyRecursive(root);}

  void insertNode(T k) {insertNode(root, k); }

  void displayNode() {displayNode(root, 0); }
};


template <typename T>
void BST<T>::insertNode(BSTNode<T>* &t, T k){
  if (t == nullptr) {
    t = new BSTNode<T>;
    t->key = k;
    cout << "insertando: " << k << '\n';
    t->left = t->right = nullptr;
  }else{
    if (k != t->key) {
      if (strcmp(t->key , k) == 1) {
        insertNode(t->left, k);
        //cout << "insertando " << k << " a la izquierda de " << t->key << '\n';
      }if(strcmp(t->key , k) == -1){
        insertNode(t->right,k);
        //cout << "insertando " << k << " a la derecha de " << t->key << '\n';
      }
    }
  }
}

template <typename T>
void BST<T>::destroyRecursive(BSTNode<T> *t){
  if (t != nullptr) {
    destroyRecursive(t -> left);
    destroyRecursive(t -> right);
    delete t;
    //cout << "destruyendo " <<  '\n';
  }
}

template <typename T>
void BST<T>::displayNode(BSTNode<T> *t ,int count) {
  if (t != nullptr) {
    count++;
    displayNode(t -> left, count);
    cout << "( " << count-1 << " )" << t -> key << "  ";
    displayNode(t -> right, count);
  }
}

#endif
