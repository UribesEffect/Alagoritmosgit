#include <iostream>
#include "mylist.hpp"
using namespace std;

int main (){
  MyList<char> lista;
  cout << "la lista esta: " << lista.empty() << endl;
  char a = 'a';
  char b = 'b';

  lista.push_back(a);
  lista.push_back(b);

  cout << "la lista esta: " << lista.empty() << endl;

  lista.pop_back();
  lista.pop_back();

  cout << "la lista esta: " << lista.empty() << endl;


  return 0;
}
