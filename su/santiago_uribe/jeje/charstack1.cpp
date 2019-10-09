#include <iostream>
#include "charstack1.hpp"
using namespace std;

CharStack::CharStack(){
  count = 0;
  capacity = INITIAL_CAPACITY;
  elements = new char[capacity];
}

CharStack::~CharStack(){
  delete[] elements;
}


int CharStack::size() {
  return count;
}


void CharStack::clear() {
  count = 0;
}


bool CharStack::empty() {
  return count == 0;
}


char CharStack::top() {
  if(empty())
    throw runtime_error("top: Attemting to get top from empty stack\n");

  return elements[count-1];
}


void CharStack::expandCapacity() {
  char *oldElements = elements;

  capacity *= 2;
  elements = new char[capacity];
  for(int i = 0; i < count; ++i)
    elements[i] = oldElements[i];
    delete[] oldElements;
}


void CharStack::push(char c) {
  if(count == capacity)
    expandCapacity();
    elements[count] = c;
    count++;
}


char CharStack::pop() {
  if(empty())
    throw runtime_error("top: Attemting to pop an empty stack\n");

  return elements[--count];

}
