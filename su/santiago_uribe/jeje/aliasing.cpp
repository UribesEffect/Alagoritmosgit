#include <iostream>
using namespace std;

int main (){
  int a = 3;
  int &b = a;// se llama aliasing que es tomar la misma refernecia de a en el mismo espacio de memoria
  int *p;
  p = &a;

  cout << a << '\n';
  cout << &b << '\n';
  cout << b << '\n';
  cout << p << '\n';
  cout << *p << '\n';
  return 0;
}
