#include "tablahash.hpp"
#include <iostream>
#include <string>
using namespace std;


int main() {
  HashMap<int> map(10);

  map.insert( "prueba1", 1);
  map.insert("prueba2", 1);
  map.insert("prueba3", 1);
  map.insert("prueba3", 5);
  map.display();

  //map.remove(5);

   //map.get(1);
  cout << endl;

  return 0;
}
