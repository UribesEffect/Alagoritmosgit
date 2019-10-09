#include <iostream>
#include "dynarray.hpp"
using namespace std;


DynArray::DynArray(int s){
  size = s;
  array = new int[s];
  for(int i = 0; i < size; ++i)
    array[i] = 0;

  cout << "DynArray instance created\n";
}

DynArray::~DynArray(){
  delete[] array;

  cout << "Dynarray instance destroyed\n";
}

void DynArray::set(int pos,int val) {
  array[pos] = val; //no bounds checking!
}

int DynArray::get(int pos){
  return array[pos]; // no bounds checking
}

int DynArray::getsize(){
  return size;
}

bool DynArray::operator==( DynArray& a){
  if(size == a.getsize()){
    for(int i = 0; i < size; ++i){
        if(array[i] != a.get(i))
          return false;
    }
  }else{
    return false;
  }
  return true;
}
DynArray DynArray::operator+(DynArray& a){
  int minsize = size < a.getsize() ? size : a.getsize();//if(cond){cod1;}else{cod2;} es igual a cond ? cod1 ; cod2
  DynArray result(minsize);

  for(int i = 0; i < minsize; ++i)
      result.set(i,array[i] + a.get(i));

  return result;
}
