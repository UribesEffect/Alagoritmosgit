#ifndef __MYARRAYQUEUE_HPP
#define __MYARRAYQUEUE_HPP

#include <iostream>
#include <stdexcept>
using namespace std;

const int INITIAL_CAPACITY = 10;

namespace qarray {
  template <typename T>
  class MyQueue {
  private:
    T *array;
    int capacity;
    int back;
    int front;
    int count;

  public:
    MyQueue();
    ~MyQueue();

    bool empty();
    int size();
    T get_back();
    T get_front();
    void push(T c); //adds element at the beginning
    T pop(); //removes element from the end
    void clear(); //removes all elements
    void expandCapacity();
    void display();
  };
}

template <typename T>
qarray::MyQueue<T>::MyQueue() {
  capacity = INITIAL_CAPACITY;
  array = new T[capacity];
  back = front = 0;
  count = 0;
}

template <typename T>
qarray::MyQueue<T>::~MyQueue() {
  delete[] array;
}

template <typename T>
bool qarray::MyQueue<T>::empty() {
  return back == front;
}

template <typename T>
int qarray::MyQueue<T>::size() {
  return count;
}

template <typename T>
T qarray::MyQueue<T>::get_back() {
  if(empty())
    throw runtime_error("get_back: Attempting to get value from empty queue\n");
  return array[back-1];
}

template <typename T>
T qarray::MyQueue<T>::get_front() {
  if(empty())
    throw runtime_error("get_front: Attempting to get value from empty queue\n");
  return array[front];
}

template <typename T>
void qarray::MyQueue<T>::push(T c) {
  array[back] = c;
  back = (back+1)%capacity;
  count++;
}

template <typename T>
T qarray::MyQueue<T>::pop() {
  if(empty())
    throw runtime_error("pop: Attempting to pop an empty queue\n");
  T c = array[front];
  front = (front +1)%capacity;
  count--;
  return c;
}

template <typename T>
void qarray::MyQueue<T>::clear() {
  back = front = 0;
}

template <typename T>
void qarray::MyQueue<T>::expandCapacity() {
  newarray = new T[capacity*2];
  oldcapacity = capacity;
  
  //
  //
}

template <typename T>
void qarray::MyQueue<T>::display() {
  for (int i = 0; i < capacity; i++) {
    if(back > front){

        if (i < front || i >= back) {
          cout << " - " ;
        }else{
          cout << array[i];
        }
    }else{

        if (i < front && i >= back) {
          cout << " - ";
        }else
          cout << array[i] ;
    }
  }
}



#endif
