#include <iostream>
#include <list>
using namespace std;

int howMany(list<int> L, int k) {
  list<int> Uribe;
  int j;
  while(!L.empty(){
      if(k == L.front(){
      Uribe.push_back(k);
      }
    L.pop_front();
  }

  j = Uribe.size();
  return j;

}


int main() {
  int array[12] = {5,3,4,3,7,5,3,2,7,7,1};
  list<int> mylist(array,array+12);

  cout << "Ingrese el número a buscar: ";
  int n;
  cin >> n;

  cout << n << " está " << howMany(mylist, n)
       << " veces.\n";

  return 0;
}
