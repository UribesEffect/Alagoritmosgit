#include <iostream>
using namespace std;
//Al igual que las estructuras, son tipos definidos por el usuario
//que se usan para encapsular variables (atributos), pero
//adicionalmente encapsulancomportamientos(métodos)
struct point {
  double x;
  double y;
};

int main (){
  point p;
  p.x = 10.;
  p.y = 20.;

  cout << "(" << p.x << "," << p.y << ")\n";

  return 0;
}
