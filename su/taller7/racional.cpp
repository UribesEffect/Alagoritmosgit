#include"racional.hpp"

Racional::Racional(int a, int b){
  numerador = a;
  if(b != 0)
    denominador = b;
  else
    cout<<"ingrese un numero diferente de 0 para el denominador."<<'\n';
  }

int Racional::AccesNumerator(){
  return numerador;
}
int Racional::AccesDenominator(){
  return denominador;
}

void Racional::changeNumerador(int a ){
  numerador = a;
}
void Racional::changeDenominador(int b ){
  denominador = b;
}
/*
istream & Racional::operator>>(istream &is,const Racional & racional ){
  int a,b;
  is >> a >> b >>
  racional(a,b);
  return is;
}

ostream & Racional::operator<<(ostream &os,const Racional & racional){
  int a,b;
  os<< a << " / "<<b<<'\n';
  return os;
}
*/

void Racional::operator=(Racional&racional){
  numerador = racional.numerador;
  denominador = racional.denominador;

}

void Racional::operator+=(Racional&racional){
  if(denominador == racional.denominador)
    numerador += racional.numerador;
  else{
    numerador = (numerador*racional.denominador)+(racional.numerador*denominador);
    denominador = denominador*racional.denominador;
  }
}

void Racional::operator+=(int a){
  numerador = (numerador*1)+(a*denominador);
}

void Racional::operator-=(Racional&racional){
  if(denominador == racional.denominador)
    numerador -= racional.numerador;
  else{
    numerador = (numerador*racional.denominador)-(racional.numerador*denominador);
    denominador = denominador*racional.denominador;
  }
}

void Racional::operator-=(int a){
  numerador = (numerador*1)-(a*denominador);
}

void Racional::operator*=(Racional&racional){
  numerador = numerador * racional.numerador;
  denominador = denominador * racional.denominador;
}
void Racional::operator*=(int a){
  numerador = numerador * a;
}
void Racional::operator/=(Racional&racional){
  numerador = numerador*racional.denominador;
  denominador = denominador*racional.numerador;
}

void Racional::operator/=(int a ){
  denominador = denominador * a;
}

Racional operator+(Racional&racionalA,Racional&racionalB){
  Racional c;
  if(racionalA.AccesDenominator()== racionalB.AccesDenominator()){
    c.changeNumerador(racionalA.AccesNumerator() + racionalB.AccesNumerator());
    c.changeDenominador( racionalA.AccesDenominator());
    return c;
  }
  else{
    c.changeNumerador((racionalA.AccesNumerator()*racionalB.AccesDenominator())+(racionalB.AccesNumerator()*racionalA.AccesDenominator()));
    c.changeDenominador(racionalA.AccesDenominator()*racionalB.AccesDenominator());
    return c;
  }
}
Racional operator+(Racional&racionalA,int b){
  racional c ;
  c.numerador  = racionalA.numerador+(racionalA.denominador*b);
  c.denominador = racionalA.denominador;
  return c;
}
Racional operator+(int b, Racional&racionalA){
  racional c ;
  c.numerador  = racionalA.numerador+(racionalA.denominador*b);
  c.denominador = racionalA.denominador;
  return c;
}

Racional operator-(Racional&racionalA,Racional&racionalB){
  Racional c;
  if(racionalA.denominador == racionalB.denominador){
    c.numerador = racionalA.numerador - racionalB.numerador;
    c.denominador = racionalA.denominador;
    return c;
  }
  else{
    c.numerador = (racionalA.numerador*racionalB.denominador)-(racionalB.numerador*racionalA.denominador);
    c.denominador = racionalA.denominador*racionalB.denominador;
    return c;
  }
}

Racional operator-(Racional&racionalA,int b){
  racional c ;
  c.numerador  = racionalA.numerador-(racionalA.denominador*b);
  c.denominador = racionalA.denominador;
  return c;
}
Racional operator-(int b,Racional&racionalA){
  racional c ;
  c.numerador  = racionalA.numerador-(racionalA.denominador*b);
  c.denominador = racionalA.denominador;
  return c;
}

Racional operator*(Racional&racionalA,Racional&racionalB){
  Racional c;
    c.numerador = (racionalA.numerador*racionalB.numerador);
    c.denominador = racionalA.denominador*racionalB.denominador;
    return c;
}
Racional operator*(Racional&racionalA,int b){
  Racional c;
    c.numerador = (racionalA.numerador*b);
    c.denominador = racionalA.denominador;
    return c;
}
Racional operator*(int b, Racional&racionalA){
  Racional c;
    c.numerador = (racionalA.numerador*b);
    c.denominador = racionalA.denominador;
    return c;
}
Racional operator/(Racional&racionalA,Racional&racionalB){
  racional c;
  c.numerador = racionalA.numerador*racionalb.denominador;
  c.denominador = racionalA.denominador*racionalB.numerador;
  return c;
}
bool  Racional::operator==(Racional&racional){
  return (numerador == racional.numerador && denominador == racional.denominador);
}
bool Racional::operator>(Racional&racional){
  return (numerador/denominador > racional.numerador/racional.denominador);
}
bool Racional::operator<(Racional&racional){
  return (numerador/denominador < racional.numerador/racional.denominador);
}
bool Racional::operator>=(Racional&racional){
  return (numerador/denominador >= racional.numerador/racional.denominador);
}
bool Racional::operator<=(Racional&racional){
  return (numerador/denominador <= racional.numerador/racional.denominador);
}
bool  Racional::operator!=(Racional&racional){
  return (numerador != racional.numerador || denominador != racional.denominador);
}
Racional &Racional::operator++(){
  return this+=1;
}
Racional operator++(int){
  Racional c = this;
  this+=1;
  return c;
}
Racional &operator--(){
  return this -=1;
}
Racional operator--(int){
  Racional c = this;
  this-=1;
  return c;
}
Racional& operator-(){
  numerador = -numerador;
  denominador = -denominador;
  return this;
}
