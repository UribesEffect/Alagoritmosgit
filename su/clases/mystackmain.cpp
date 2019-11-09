#include <iostream>
#include "mystack.hpp"
using namespace std;

int main (){
  MyStack<char> lista;
  cout << "la lista esta: " << lista.empty() << endl;
  char a = 'a';
  char b = 'b';

  lista.push_back(a);
  lista.push_back(b);

  cout << "la lista esta: " << lista.empty() << endl;

  cout << lista.top() << endl;

  lista.pop_back();
  lista.pop_back();

  cout << "la lista esta: " << lista.empty() << endl;


  return 0;
}
