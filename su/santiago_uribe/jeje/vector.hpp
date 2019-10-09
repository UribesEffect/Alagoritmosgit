#ifndef __VECTOR_HPP
#define __VECTOR_HPP

class Vector2D {
  private:
    double x;
    double y;
  public:
    Vector2D();
    ~Vector2D();

    void set_x(double v);

    void set_y(double w);

    double get_x();

    double get_y();

    double norm();//quiero la norma de x,y

};
Vector2D operator+(Vector2D& v1, Vector2D& v2);
double operator*(Vector2D& v1, Vector2D& v2);
Vector2D operator*(double x , Vector2D& v2);
#endif
