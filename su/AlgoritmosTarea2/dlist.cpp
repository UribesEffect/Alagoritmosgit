#ifdef __DLIST__HPP

template<typename dataType>
List<dataType>:: List(){
  count = 0;
  first = nullptr;
  last = nullptr;
}

template<typename dataType>
List<dataType>:: List(const List & other){
  Node_Cell *puntero;

  first = nullptr;
  last = nullptr;
  for (puntero = other.first; puntero != nullptr; puntero = puntero->siguiente) {
    push_back(puntero->datos);
  }
  count = other.count;
}

template<typename dataType>
List<dataType>:: ~List(){
  clear();
}

template<typename dataType>
int List<dataType>:: size() const{
  return count;
}

template<typename dataType>
bool List<dataType>:: empty() const{
  if (count == 0)
    return true;
  else
    return false;
}

template<typename dataType>
void List<dataType>:: clear(){
  for( first; first!= nullptr; first = first->siguiente){
    delete[] first;
  }
  count = 0;
  last = nullptr;
}

template<typename dataType>
dataType & List<dataType>:: back(){
  if (empty()){
    throw runtime_error("Lista vacia");
  }
  return last->datos;
}

template<typename dataType>
dataType & List<dataType>:: front(){
  if (empty()){
    throw runtime_error("Lista vacia");
  }
  return first->datos;
}

template<typename dataType>
void List<dataType>:: push_back(dataType & rhs){
  Node_Cell *newNode_cell = new Node_Cell;
  newNode_cell->datos = rhs;

  if(empty()){
    newNode_cell->siguiente = nullptr;
    newNode_cell->anterior = nullptr;
  }else{
    newNode_cell->siguiente = nullptr;
    newNode_cell->anterior = last;
    last = newNode_cell;
  }
  count ++;
}

template<typename dataType>
void List<dataType>:: push_front(dataType & rhs){
  Node_Cell *newNode_cell = new Node_Cell;
  newNode_cell->datos = rhs;

  if(empty()){
    newNode_cell->siguiente = nullptr;
    newNode_cell->anterior = nullptr;
  }else{
    newNode_cell->anterior = nullptr;
    newNode_cell->siguiente = first;
    first = newNode_cell;
  }
  count ++;
}

// template<typename dataType>
// void List<dataType>:: pop_back(){
//   if(empty()){
//     //throw runtime_error("Lista vacia");
//     exit(0);
//   }else if(count == 1){
//     Node_Cell *ultimo = last->anterior;
//     delete last;
//     last = ultimo;
//     count--;
//
//   }else{
//     Node_Cell *ultimo = last->anterior;
//     delete last;
//     last = ultimo;
//     last->siguiente = nullptr;
//     count--;
//
//   }
//
// }
template<typename dataType>
void List<dataType>:: pop_back(){
  if(!empty()){
    Node_Cell *ultimo = last;
    last = last-> anterior;
    last->siguiente = nullptr;
    delete ultimo;
    count--;
  }
}

template<typename dataType>
void List<dataType>:: pop_front(){
  if(!empty()){
    Node_Cell *primero = first;
    first = first-> siguiente;
    first->anterior = nullptr;
    delete primero;
    count--;
  }
}

// 
// template<typename dataType>
// void List<dataType>:: pop_front(){
//   if(empty()){
//     //throw runtime_error("Lista vacia");
//     exit(0);
//   }else if(count == 1){
//     Node_Cell *primero = first->siguiente;
//     delete first;
//     first = primero;
//     count--;
//
//   }else{
//     Node_Cell *primero = first->siguiente;
//     delete first;
//     first = primero;
//     first->anterior = nullptr;
//
//   }
//   count --;
// }

#endif
