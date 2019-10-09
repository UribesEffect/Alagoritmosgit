#include <iostream>
#include "vector.hpp"
#include <math.h>
using namespace std;


Vector2D::Vector2D(){
  x = 0.;
  y = 0.;
}

void Vector2D::set_x(double v){
  x = v;
}

void Vector2D::set_y(double w){
  y = w;
}

double Vector2D::get_x(){
  return x;
}

double Vector2D::get_y(){
  return y;
}


Vector2D::~Vector2D(){}

double Vector2D::norm(){
  return sqrt(x*x + y*y);
}
/*Vector2D operador+(Vector2D v){
  Vector2D n;
  n.x = x + v.x;
  n.y = y + v.y;
  return n;
}*/
Vector2D operator+(Vector2D& v1, Vector2D& v2){
  Vector2D new_v;
  new_v.set_x(v1.get_x() + v2.get_x());
  new_v.set_y(v1.get_y() + v2.get_y());
  return new_v;
}
double operator*(Vector2D& v1, Vector2D& v2){
  double a,b,x;
  a = ( v1.get_x() * v2.get_x() );
  b = ( v1.get_y() * v2.get_y() );
  x = a+b;

  return x;
}
Vector2D operator*(double x, Vector2D& v2){
  Vector2D new_v;
  new_v.set_x(x * v2.get_x());
  new_v.set_y(x * v2.get_y());
  return new_v;
}
