#ifndef __MYSTACK_HPP
#define __MYSTACK_HPP
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyStack {
  private:
    struct Cell{
      T ch;
      Cell *next;
    };

    Cell *back;

  public:
    MyStack() : back(nullptr) {}
    ~MyStack();

    bool empty();
    void push_back(T c);
    void pop_back();
    T top();
};


template <typename T>
MyStack<T>::~MyStack() {
  for(back; back != nullptr; back = back->next){
    delete back;

  }
}


template <typename T>
bool MyStack<T>::empty(){
  return back == nullptr;
}


template <typename T>
void MyStack<T>::push_back(T c){
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
void MyStack<T>::pop_back(){
  Cell *cursor = back;
  if(back != nullptr){
    back = back->next;
    cout << "estoy eliminando " << cursor->ch << endl;
    delete cursor;

  }
}

template <typename T>
T MyStack<T>::top(){
  if(back != nullptr){
    return back->ch ;
  }

}


#endif
