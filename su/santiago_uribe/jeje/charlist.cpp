#include <iostream>
#include "charlist.hpp"
using namespace std;


bool CharList::empty(){
  if(back == nullptr){
    return true;
  }else{
    return false;
  }
}

void CharList::push_back(char c){
  Cell *newchar = new Cell;
  newchar -> ch = c;

  if(empty()){
    back = newchar;
    newchar->next = nullptr;
  }else{
    newchar->next = back;
    back = newchar;
  }
  cout << "estoy insertando  " << c << endl;
}

void CharList::pop_back(){
  Cell *p = back;
  back = back->next;
  cout << "estoy eliminando " << p->ch << endl;
  delete p;

}
