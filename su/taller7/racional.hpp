#ifndef __racional_hpp
#define __racional_hpp

#include<iostream>

using namespace std;

class Racional{
private:

  int numerador;
  int denominador;
public:

  Racional();
  ~Racional();

  Racional(int a, int b);

  //metodos para el acceso a los atributos
  int AccesNumerator();

  int AccesDenominator();

  //metodos para el la modificacion de los atributos.
  void changeNumerador(int a);

  void changeDenominador(int b);

  //Operadores de insercion
  //istream &operator>>(istream &is,const Racional & racional);
  //ostream &operator<<(ostream &os,const Racional & racional);

  //operadores de asignacion.
  void operator=(Racional&racional);
  //operadores de asignacion con operacion.
  void operator+=(Racional&racional);
  void operator+=(int a);

  void operator-=(Racional&racional);
  void operator-=(int a);

  void operator*=(Racional&racional);
  void operator*=(int a );

  void operator/=(Racional&racional);
  void operator/=(int a);

  //operadores aritmeticos


  //operadores relacionales
  bool  operator==(Racional&racional);
  bool operator>(Racional&racional);
  bool operator<(Racional&racional);
  bool operator>=(Racional&racional);
  bool operator<=(Racional&racional);
  bool operator!=(Racional&racional);
  //incremento
  Racional &operator++();
  Racional operator++(int);

  Racional &operator--();
  Racional operator--(int);

  Racional& operator-();

};
Racional operator+(Racional&racionalA,Racional&racionalB);
Racional operator+(Racional&racionalA,int b);
Racional operator+(int b, Racional&racionalA);

Racional operator-(Racional&racionalA,Racional&racionalB);
Racional operator-(Racional&racionalA,int b);
Racional operator-(int b,Racional&racionalA);


Racional operator*(Racional&racionalA,Racional&racionalB);
Racional operator*(Racional&racionalA,int b);
Racional operator*(int b, Racional&racionalA);



Racional operator/(Racional&racionalA,Racional&racionalB);
#endif
