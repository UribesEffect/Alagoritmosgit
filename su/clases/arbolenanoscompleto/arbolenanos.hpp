#ifndef __ARBOLENANOS_HPP
#define __ARBOLENANOS_HPP
#include <iostream>



using namespace std;

template <typename T>
struct BSTNode {
  T key;
  BSTNode *left;
  BSTNode *right;
  BSTNode *parent;

};


template <typename T>
class BST {
private:
  BSTNode<T> *root;
  void insertNode(BSTNode<T>* p,BSTNode<T>* &t, T k);
  void destroyRecursive(BSTNode<T> *t);
  void displayNode(BSTNode<T> *t ,int count);

  BSTNode<T>* findNode(BSTNode<T> *t, T k);
  BSTNode<T>* minimun(BSTNode<T> *t);
  BSTNode<T>* maximum(BSTNode<T> *t);
  BSTNode<T>* succesor(BSTNode<T> *t);
  BSTNode<T>* predecessor(BSTNode<T> *t);
  BSTNode<T>* removeNode(BSTNode<T> *t, T k);




public:
  BST() { root = nullptr; }
  ~BST() {destroyRecursive(root);}

  void insertNode(T k) {insertNode( nullptr,root, k); }

  void displayNode() {displayNode(root, 0); }

  BSTNode<T>* findNode2(T k);

  BSTNode<T>* minimun2();
  BSTNode<T>* maximum2();
  BSTNode<T>* removeNode2(T k);

};


template <typename T>
void BST<T>::insertNode(BSTNode<T>* p, BSTNode<T>* &t, T k){
  if (t == nullptr) {
    t = new BSTNode<T>;
    t->key = k;
    t->parent = p;


    cout << "insertando: " << k << '\n';
    t->left = t->right = nullptr;
  }else{
    if (k != t->key) {



      if (k < t->key) {
        insertNode( t, t->left, k);

        //cout << "insertando " << k << " a la izquierda de " << t->key << '\n';
      }if(k > t->key){
        insertNode( t, t->right,k);

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
  if (t != nullptr ) {
    count++;
    displayNode(t -> left, count);
    cout << "( " << count-1 << " )" << t -> key  << " /-----------/ my parent: "  <<"falta" <<"  \n";
    displayNode(t -> right, count);
  }
}


template <typename T>
BSTNode<T>* BST<T>::findNode(BSTNode<T> *t, T k){
  if(t == nullptr) return nullptr;
  if(k == t->key) return t;
  if(k < t->key){
    return findNode(t->left , k);
  }else{
    return findNode(t->right, k);
  }
}

template <typename T>
BSTNode<T>* BST<T>::findNode2(T k){
  return findNode(root , k);
}

template<typename T>
BSTNode<T>* BST<T>::minimun(BSTNode<T> *t){
  while (t->left != nullptr) {
    t = t->left;
  }
  return t;
}

template<typename T>
BSTNode<T>* BST<T>::minimun2(){
  return minimun(root);
}

template<typename T>
BSTNode<T>* BST<T>::maximum(BSTNode<T> *t){
  while (t->right != nullptr) {
    t = t->right;
  }
  return t;
}

template<typename T>
BSTNode<T>* BST<T>::maximum2(){
  return maximum(root);
}

template <typename T>
BSTNode<T>* BST<T>::succesor(BSTNode<T> *t){
  if (t->key != maximum()) {
    if (t->right != nullptr) {
      return minimun(t->right);
    }else{
      if (t->parent->left == t) {
        return t->parent;
      }else{
        while (t == t ->parent ->right) {
          t = t -> parent;
        }
        t = t->parent;
        return t;
      }
    }
  }
}


template <typename T>
BSTNode<T>* BST<T>::predecessor(BSTNode<T> *t){
    if (t->key != minimun()) {
      if (t->left != nullptr) {
        return maximum(t->left);
      }else{
        if (t->parent->right == t) {
          return t->parent;
        }else{
          while (t == t ->parent ->left) {
            t = t -> parent;
          }
          t = t->parent;
          return t;
        }
      }
    }
  }


template <typename T>
BSTNode<T>* BST<T>::removeNode(BSTNode<T> *t, T k){
  BSTNode<T> *c = findNode2(k);
  if (c == nullptr){//no tiene nodos
        throw runtime_error("no existen nodos");
  }else if(c->parent == nullptr && c->left == nullptr && c->right == nullptr){//solo tiene un nodo
        root == nullptr;
        delete c;


  }else if(c->left == nullptr && c->right == nullptr){//cuando no tiene hijos
        if (c->parent->key > c->key) {
              c->parent->left = nullptr;
              delete c;
        }else{
              c->parent->right = nullptr;
              delete c;
        }
  }else if(){//cuando solo tiene un hijo

  }
}



template<typename T>
BSTNode<T>* BST<T>::removeNode2(T k){
  return removeNode(root, k);
}




#endif
