#include <iostream>
#include "dynarray.hpp"
using namespace std;

int main (){
  int N = 15;
  DynArray myArray(N);

  for(int i = 0; i < N; ++i)
      myArray.set(i, 10*i);

  for(int i = 0; i < N; ++i)
      cout << myArray.get(i) << " ";

    cout << "\n";

    int M = 10;
    DynArray secondArray(N);

    for(int i = 0; i < M; ++i)
        secondArray.set(i, 10*i);

    for(int i = 0; i < M; ++i)
        cout << secondArray.get(i) << " ";

      cout << "\n";

      bool igu = (myArray == secondArray);
      cout << "son iguales los arrays :" << igu << endl;
      /*DynArray sum = (myArray + secondArray);
      cout << "la suma de los arreglos es:" << sum << endl;*/

  return 0;
}
