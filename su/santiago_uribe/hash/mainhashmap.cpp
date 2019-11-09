#include "hashmap.hpp"
#include <iostream>
#include <string>
using namespace std;


int main() {
  MyMap<int ,string> map;

  if(map.empty())
    cout << "Empty map\n";


  map.insert(1 , "hola");
  map.insert(2 , "como");
  map.insert(3 , "te");
  map.insert(4 , "encuentras");
  map.insert(5 , "joder");
  map.insert(6, "hoy?");

  //map.remove(5);

   //map.get(1);
  cout << endl;

  return 0;
}
