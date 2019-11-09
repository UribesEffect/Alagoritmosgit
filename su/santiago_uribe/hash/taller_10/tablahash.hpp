#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

const int TABLE_SIZE = 10;

template<typename VT>
struct  KeyValueNode {
    string  key;
    VT value;
    KeyValueNode <VT > *next;
};

template  <typename VT>
class  HashMap {
  private:
          //  pointer  to  pointers  to  buckets
          KeyValueNode <VT> ** table;

          int  tableSize; // size of the  pointer  table
          int  count;      //  number  of  elements  in  table

          //  default  value  to  return  when  search  fails
          VT  notfound;

          //  search  for  key "key" inside  the  bucket  at  index
          // "index" of the  table
          //  return  the  element  if found , or  nullptr  otherwise
          KeyValueNode <VT >*  search_bucket(int index , string  key);

          // hash  function
          unsigned  int  hash(string  key) {
              unsigned  int  hashVal = 0;
              for (char ch : key)
                  hashVal  += ch;
              return  hashVal  % tableSize;
          }

      public:
          HashMap(VT def);
        //  ~HashMap ();

          int  size();    //  return  no. of  elements
          bool  empty(); // true if  there  are no  elements
          void  clear(); //  delete  all  elements

          //  chained  hash  search: search  for  elem  with  key = key
          VT get(string  key);
          //  return  true if key is in  table
          bool  search(string  key);
          //  chained  hash  insert: insert  at the  head of  bucket
          void  insert(string key , VT  value);
          //  chained  hash  remove: remove  element  with  key = key
          void  remove(string  key);

          // print  no. of elems  in each  bucket  to a file  filename
          void  distribution(const  string &filename);

          void display();
};

template  <typename VT>
HashMap<VT>::HashMap(VT def){
  count = 0;
  tableSize = TABLE_SIZE;
  table = new KeyValueNode<VT>*[tableSize];
  for (int i = 0; i < tableSize; i++) {
      table[i] == nullptr;
  }
}
//
// template  <typename VT>
// HashMap<VT>::~HashMap(){
//
//   delete[] table;
// }
//
template  <typename VT>
void HashMap<VT>::clear(){
  for (int i = 0; i < tableSize; i++) {
      while(table[i] != nullptr){
        delete table[i];
      }
  }
}


template  <typename VT>
int HashMap<VT>::size(){
    return count;
}

template  <typename VT>
VT HashMap<VT>::get(string key){
    KeyValueNode<VT> *comienzo = table[hash(key)];
    while (comienzo->next != nullptr) {
      if (comienzo->key == key) {
        return comienzo->value;
      }else{
          return false;//no lo encontro
      }
    }
}



template  <typename VT>
void HashMap<VT>::insert(string key, VT value){
  KeyValueNode<VT> *comienzo = table[hash(key)];
  if(comienzo == nullptr){
      KeyValueNode<VT> *nodo = new KeyValueNode<VT>;
      nodo->key = key;
      nodo->value = value;
      nodo->next = nullptr;
      comienzo = nodo;
      table[hash(key)] = nodo;
    }else{
      KeyValueNode<VT> *nodo = new KeyValueNode<VT>;
      KeyValueNode<VT> *temporal = comienzo;
      nodo->key = key;
      nodo->value = value;
      nodo->next = temporal;
      comienzo = nodo;
      table[hash(key)] = nodo;
    }
    count++;
}

template  <typename VT>
void HashMap<VT>::display(){
  cout <<"//////////////////\n"; 
  cout << "////DISPLAYING////" << endl;
  cout << "//el count es: " << count << "//\n" ;
  cout <<"//////////////////\n";
  for (int i = 0; i < TABLE_SIZE; i++) {
    cout << i << "  ";
    KeyValueNode<VT> *indice = table[i];
    while (indice != nullptr) {
      cout << indice->key << "  ";
      indice = indice->next;
    }
    cout << endl;
  }
}
