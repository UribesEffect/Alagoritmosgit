#include <iostream>
#include "arbolenanos.hpp"
#include <string>
using namespace std;

int main (){
  BST<string> NodoApunt;



  NodoApunt.insertNode("Doc");
  NodoApunt.insertNode("Sleepy");
  NodoApunt.removeNode2("Sleepy");


/*
  NodoApunt.insertNode("Grumpy");
  NodoApunt.insertNode("Doc");
  NodoApunt.insertNode("Sleepy");
  NodoApunt.insertNode("Bashful");
  NodoApunt.insertNode("Dopey");
  NodoApunt.insertNode("Happy");
  NodoApunt.insertNode("Sneezy");

  NodoApunt.findNode2("Doc");
*/


/*
  NodoApunt.insertNode("Happy");
  NodoApunt.insertNode("Sneezy");
  NodoApunt.insertNode("Bashful");
  NodoApunt.insertNode("Doc");
  NodoApunt.insertNode("Sleepy");
  NodoApunt.insertNode("Grumpy");
  NodoApunt.insertNode("Dopey");
  */
  NodoApunt.displayNode();
  cout << '\n';
  return 0;
}
