
#ifndef __DOMINO_HPP_
#define __DOMINO_HPP_
#include <iostream>

using namespace std;

class domino{

private:

  int ldots;
  int rdots;

public:

  domino(){}//constructor

  ~domino(){}//destructor

  domino(int left, int right);//constructor parametrizado
  

  void set_left_dots(int left);//cambia los puntos del lado izquierdo

  void set_right_dots(int right);//cambia los puntos del lado derecho



  int get_left_dots();//retorna los puntos del lado izquierdo

  int get_right_dots();//retorna los puntos del lado derecho



  string to_string();//representa el domino como un string



  friend ostream& operator<<(ostream& os, domino& Ficha);//operador que imprime la representacion del domino// preguntar



  bool operator==(const domino SecondDomino);// evalua la igualdad

  bool operator!=(const domino SecondDomino);//evalua difrencia

  bool operator<(const domino SecondDomino);//evalua si es menor

  bool operator<=(const domino SecondDomino);// si es menor o igual

  bool operator>(const domino SecondDomino);//si es mayor

  bool operator>=(const domino SecondDomino);//si es mayor o igual



  domino flip_them();//invierte los valores de ldots y rdots

};

#endif
