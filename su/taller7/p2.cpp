#include<iostream>

using namespace std;

int main(){
  int integer,&refint = integer;
  integer = 5;
  refint = 10;
  cout<<integer<<"\t"<<refint<<'\n';


  return 0;
}
