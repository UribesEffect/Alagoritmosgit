#include <iostream>
#include "vector.hpp"
using namespace std;

int main (){
  Vector2D myVec;  //Declare object of type Vector2D
  Vector2D secondVec;
  Vector2D sumVec;
  double producpun;
  Vector2D producesca;

  myVec.set_x(2);
  myVec.set_y(4);
  secondVec.set_x(3);
  secondVec.set_y(2);
  sumVec = (myVec+secondVec);
  producpun = (myVec * secondVec);
  producesca = (5 * secondVec);

  cout <<"("<< myVec.get_x() <<","<< myVec.get_y() << ")" << '\n';
  cout <<"("<< secondVec.get_x() <<","<< secondVec.get_y() << ")" << '\n';

  cout << "la norma del 1 vector es: "<< myVec.norm() << '\n';

  cout << "La suma de los dos vectores es: (" << sumVec.get_x() <<","<< sumVec.get_y() << ")" << '\n';
  cout << "el producto punto de estos dos vectores es : " << producpun << '\n';
  cout << "El producto por una escalar(5) con el segundo vec : (" << producesca.get_x() <<","<< producesca.get_y() << ")" << '\n';

  return 0;
}
