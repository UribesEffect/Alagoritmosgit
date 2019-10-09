#include <iostream>
#include "charlist.hpp"
using namespace std;

int main (){
  CharList lista;
  cout << "la lista esta: " << lista.empty() << endl;
  char a = 'a';
  char b = 'b';

  lista.push_back(a);
  lista.push_back(b);

  cout << "la lista esta: " << lista.empty() << endl;
  while (!lista.empty()) {
    lista.pop_back();
  }
  cout << "la lista esta: " << lista.empty() << endl;


  return 0;
}
