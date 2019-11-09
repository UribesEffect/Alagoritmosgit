#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

const int INITIAL_CAPACITY = 0;

template<typename KT,typename VT>
class MyMap {
  private:
    struct KeyValuePair {
      KT key;
      VT value;
    };

    KeyValuePair *array;
    int capacity;
    int count;
    void expandCapacity();
    int findKey(KT key);
    public:
      MyMap();
      ~MyMap();
      int size();
      bool empty();
      void clear();
      void insert(KT key, VT value);
      VT get(KT key);
      bool containsKey(KT key);
      void remove(KT key);
};


template<typename KT,typename VT>
MyMap<KT ,VT>::MyMap(){
  capacity = INITIAL_CAPACITY;
  count = 0;
  array = new KeyValuePair[capacity];
}


template<typename KT,typename VT>
MyMap<KT ,VT>::~MyMap(){
  delete[] array;
}




template<typename KT,typename VT>
int MyMap<KT,VT>::size() {
  return count;
}


template<typename KT,typename VT>
bool MyMap<KT,VT>::empty() {
  return count == 0;
}


template<typename KT,typename VT>
void MyMap<KT,VT>::clear() {
  count = 0;
}



template <typename KT, typename VT>
void MyMap<KT,VT>::insert(KT key, VT value) {
  int index = findKey(key);
  if (index == -1) {
    if (count == capacity) expandCapacity();
    index = count++;
    array[index].key = key;
  }
  array[index].value = value;
}



template<typename KT,typename VT>
VT MyMap<KT,VT>::get(KT key) {
  int index = findKey(key);
  if(index == -1)
      throw runtime_error("non-existent key\n");
  return array[index].value;

}



template<typename KT,typename VT>
bool MyMap<KT,VT>::containsKey(KT key) {
  if (findKey(key) != -1) {
    return true;
  }else{
    return false;
  }
}


template<typename KT,typename VT>
void MyMap<KT,VT>::remove(KT key) {
  int index = findKey(key);
  if(index == -1) throw runtime_error("remove: Attempting to removevalue of non-existent key\n");

  for(int i = index; i < count-1; i++){
      array[i].key = array[i+1].key;
      array[i].value = array[i+1].value;
  }
  count--;
}





template <typename KT, typename VT>
int MyMap<KT,VT>::findKey(KT key) {
  //linear search algorithm
  for (int i = 0; i < count; i++) {
    if (array[i].key == key) return i;
  }
  return -1;
}



template <typename KT, typename VT>
void MyMap<KT,VT>::expandCapacity() {
  KeyValuePair *oldelements = array;
  capacity = capacity *2;
  array = new KeyValuePair[capacity];
  for (int i = 0; i < count; i++) {
    array[i].key = oldelements[i].key;
    array[i].value = oldelements[i].value;
  }
  delete[] oldelements;

}
