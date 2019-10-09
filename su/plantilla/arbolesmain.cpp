#include <iostream>
#include "arboles.hpp"
using namespace std;

int main (){
  BST<int> NodoApunt;
  NodoApunt.insertNode(5);
  NodoApunt.insertNode(4);
  NodoApunt.insertNode(3);
  NodoApunt.insertNode(7);
  NodoApunt.displayNode();
  cout << '\n';
  return 0;
}
