#include <iostream>
using namespace std;

/*int main (){
  int *p1;
  int a = 3;
  p1 = &a;
  cout << a<< '\n';
  cout << *p1<< '\n';
  cout << &p1<< '\n';
  cout << p1 << '\n';
  return 0;
}*/
/*
void foo(int &var){
  var++;
}
int main(){
  int x = 3;
  foo(x);
  cout << x << '\n';
  return 0;
}*/
/*
void foo(int* miArreglo, int size){
  for(int i = 0; i < size: i++)
    cout << miArreglo[i] << endl;
}
int main(){
  int miArreglo[5] = {1,2,3,4,5};
  foo(miArreglo,5);
  return 0;
}*/
/*
int main() {
  int list[3] = {1,2,3};
  int *p = list;
  cout << "p: " << p << endl;
  cout << "p++: " << p++ << endl;
  cout << "p: " << p << endl;

  int *q = list;
  cout << "q: " << q << endl;
  cout << "++q: " << ++q << endl;
  cout << "q: " << q << endl;
  return 0;
}*/

int mayornum(double* list, int size){
  int mayor;
  for(int i = 0; i < size; i++){
    if(list[i+1] > list[i] ){
      mayor = list[i+1];
    }
  }return mayor;
}
int main(){
  double list[3] = {1,2,3};
  cout << mayornum(list,3) << '\n';
  return 0;
}
