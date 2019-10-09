#include <iostream>
using namespace std;

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
