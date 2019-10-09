#include <iostream>
using namespace std;
int mayornum(double* list, int size){
  int mayor;
  for(int i = 0; i < size; i++){
    if(list[i+1] > list[i] ){
      mayor = list[i+1];
    }else{
      mayor = list[i];
    }
  }
  return mayor;
}

int main(){
  double list[3] = {9,2,3};
  cout << mayornum(list,3) << '\n';
  return 0;
}
