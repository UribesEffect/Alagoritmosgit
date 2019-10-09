#include <iostream>
using namespace std;

int main (){
  int *ip = new int;
  *ip = 42;
  cout << *ip << '\n';
  cout << ip << '\n';//direccion en memoria
  delete ip;
  cout << *ip << '\n';
  cout << ip << '\n';//direccion en memoria
  return 0;
}
