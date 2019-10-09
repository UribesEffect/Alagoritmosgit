#include <iostream>
using namespace std;
int main (){

    for (unsigned i = 1; i > 0; i++) {
      double *ip = new double[10000];
      *ip = 1;
      cout << *ip << '\n';
      delete[] ip;
    }

  return 0;
}
