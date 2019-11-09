#ifndef __DLIST__HPP
#define __DLIST__HPP
#include <iostream>

using namespace std;


template < typename dataType >
class List {
private :
  struct Node_Cell {
    dataType datos;
    Node_Cell *anterior;
    Node_Cell *siguiente;

  };

public :
  List () ; // create empty list
  List ( const List & other ) ; // new list from other list
  ~ List () ; // destroy list & contents

  List & operator =( const List & other ) ;

  int size () const ; // return number of elements
  bool empty () const ; // check if container is empty
  void clear () ; // clear contents of list

  dataType & back () ; // access last element
  dataType & front () ; // access first element

 void push_back ( dataType & rhs ) ; // insert at end
 void push_front ( dataType & rhs ) ; // insert at beg
 void pop_back () ; // remove last item
 void pop_front () ; // remove first item

private :
 int count; // number of elements
 /* insert other fields for List */
 Node_Cell *first;
 Node_Cell *last;
};

#include "dlist.cpp"
#endif
