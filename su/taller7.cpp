#include <iostream>
using namespace std;
//punto1
int main() {
  int ival = 1024;//asignar
  // int &ref; //no puedo decir que una referencia es igual a un entero
  int &rval = ival;//asignar un valor a una referencia
  //int *pval1 = rval;//no puedo transformar un entero a un puntero
  int *pval2 = &rval;//asignar una referencia a un puntero
  //int *pval3 = ival;//no puedo transformar un entero a un puntero
  int *pval4 = &ival;//asignar una referencia a un puntero
  int *p1, p2;
  cout << ival << endl;//1024
  cout << &rval << endl;//referencia
  cout << &ival << endl;//referencia
  cout << *pval2 << endl;//como es puntero retorna lo que tiene, en este caso 1024
  cout << *pval4 << endl;//como es puntero retorna lo que tiene, en este caso 1024

  return 0;
}

//punto 2
/*
int main(){
  int integer, &refInt = integer;
  integer = 5;
  refInt = 10;
  cout << integer << "\t" << refInt  << endl;
  return 0;
}*/
  //imprime integer = 10 y refInt = 10
/*
int main(){
  int integer;
  int &refInt = integer;

  integer = 5;
  refInt = 10;
  cout << integer << "\t" << refInt  << endl;
  return 0;
}*/

/*punto3

1.Un puntero puede ser re-asigando cualquier numero de veces
 mientras una referencia solo puede ser asignada al momento de la creación.


2.Punteros pueden apuntar a “ninguna parte” (NULL, nullptr),
 mientras que referencias simpre apuntan (o hacen referencia) a un objeto.

3.No es posible obtener la dirección en memoria de una referencia,
  como si es posible con los punteros.

4.No es posible hacer ningún tipo de aritmetica con referencias,
 como si es posible hacer con punteros.

*/
