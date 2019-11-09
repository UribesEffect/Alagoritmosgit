/*
Juan Camilo Rodriguez
Santiago Uribe Luna
*/
#include "simple_vector.hpp"


/*
 * CLASS BidirIterator METHODS ---------------------------------------------
 */
BidirIterator::BidirIterator(double *beg){
  ptr = beg;
}
BidirIterator::BidirIterator(const BidirIterator& it){
  ptr = it.ptr;
}
double & BidirIterator::operator*(){
  return *ptr;
}
BidirIterator & BidirIterator::operator++(){
  ptr = ptr + 1;
  return *this;

}
BidirIterator BidirIterator::operator++(int){
  BidirIterator a;
  a.ptr = ptr;
  ptr = ptr + 1;
  return a;
}

BidirIterator & BidirIterator::operator--(){
  ptr = ptr - 1;
  return *this;
}

BidirIterator BidirIterator::operator--(int){
  BidirIterator a;
  a.ptr = ptr;
  ptr = ptr - 1;
  return a;
}

void BidirIterator::operator=(const BidirIterator it){
  ptr = it.ptr;
}

bool BidirIterator::operator==(const BidirIterator it){
  if(ptr == it.ptr)
    return true;
  return false;

}
bool BidirIterator::operator!=(const BidirIterator it){
  if(ptr != it.ptr)
    return true;
  return false;

}
/**********************************************
 *
 *
 *
 *
 *
 * Su
 * código
 * aquí
 *
 *
 *
 *
 *
 **********************************************/


/*
 * CLASS SimpleVec METHODS -------------------------------------------------
 */

SimpleVec::iterator SimpleVec::begin(){
  return iterator(array);
}
SimpleVec::iterator SimpleVec::end(){
  return iterator(array + length);
}
// Iterator-related methods
/**********************************************
 *
 *
 * Su
 * código
 * aquí
 *
 *
 **********************************************/

// Constructors
SimpleVec::SimpleVec() : capacity(INITIAL_CAPACITY), length(0) {
    array = new double[capacity];
}

SimpleVec::SimpleVec(const SimpleVec& rhs) {
    capacity = rhs.capacity;
    length = rhs.length;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = rhs.array[i];
}

// Destructor
SimpleVec::~SimpleVec() {
    delete[] array;
}

// Assignment operator
SimpleVec& SimpleVec::operator=(const SimpleVec& rhs) {
    delete[] array;
    capacity = rhs.capacity;
    length = rhs.length;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = rhs.array[i];
    return *this;
}


// Other SimpleVec methods
void SimpleVec::push(double value) {
    if(length == capacity) expandCapacity();
    array[length++] = value;
}

void SimpleVec::erase(int index) {
    for(int i = index; i < length-1; ++i)
        array[i] = array[i+1];
    length--;
}

void SimpleVec::insert(int index, double value) {
    if(length == capacity) expandCapacity();
    for(int i = length-1; i > index; --i)
        array[i] = array[i-1];
    array[index] = value;
    length++;
}

void SimpleVec::modify(int index, double value) {
    array[index] = value;
}

double SimpleVec::retrieve(int index) {
    return array[index];
}

void SimpleVec::expandCapacity() {
    double *oldArray = array;
    capacity *= 2;
    array = new double[capacity];
    for(int i = 0; i < length; ++i)
        array[i] = oldArray[i];
    delete[] oldArray;
}

void SimpleVec::clear() {
    length = 0;
}

bool SimpleVec::empty() {
    return length == 0;
}

int SimpleVec::size() {
    return length;
}
