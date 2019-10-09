#ifndef __MYLIST_HPP
#define __MYLIST_HPP
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyList {
  private:
    struct Cell{
      T ch;
      Cell *next;
    };

    Cell *back;

  public:
    MyList() : back(nullptr) {}
    ~MyList();

    bool empty();
    void push_back(T c);
    void pop_back();
};


template <typename T>
MyList<T>::~MyList() {
  for(back; back != nullptr; back = back->next){
    delete back;

  }
}


template <typename T>
bool MyList<T>::empty(){
  return back == nullptr;
}


template <typename T>
void MyList<T>::push_back(T c){
  Cell *newCell = new Cell;
  newCell -> ch = c;

  if(empty())
    newCell->next = nullptr;
  else
    newCell->next = back;
  back = newCell;
  cout << "estoy insertando  " << back->ch << endl;
}

template <typename T>
void MyList<T>::pop_back(){
  Cell *cursor = back;
  if(back != nullptr){
    back = back->next;
    cout << "estoy eliminando " << cursor->ch << endl;
    delete cursor;

  }
}


#endif
