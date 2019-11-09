#ifndef __ARBOLESENANOS_HPP
#define __ARBOLESENANOS_HPP
#include <iostream>



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

  BSTNode<T>* findNode(BSTNode<T> *t, T k);

public:
  BST() { root = nullptr; }
  ~BST() {destroyRecursive(root);}

  void insertNode(T k) {insertNode(root, k); }

  void displayNode() {displayNode(root, 0); }

  BSTNode<T>* findNode2(T k);



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
      if (k > t->key) {
        insertNode(t->left, k);
        //cout << "insertando " << k << " a la izquierda de " << t->key << '\n';
      }if(k < t->key){
        insertNode(t->right,k);
        //cout << "insertando " << k << " a la derecha de " << t->key << '\n';
      }
    }
  }
}

template <typename T>
BSTNode<T>* BST<T>::findNode(BSTNode<T> *t, T k){
  if(t == nullptr) return nullptr;
  if(t == nullptr) return t;
  if(k < t->key){
    return findNode(t->left , k);
  }else{
    return findNode(t->right, k);
  }
}

template <typename T>
BSTNode<T>* BST<T>::findNode2(T k){
  return findNode(root, k);
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
