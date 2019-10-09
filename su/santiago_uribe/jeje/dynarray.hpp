#ifndef __DYNARRAY_HPP
#define __DYNARRAY_HPP

class DynArray {
  private:
    int *array;
    int size;
  public:
    DynArray(int s);
    ~DynArray();

    void set(int pos,int val);
    int get(int pos);
    int getsize();
    bool operator==( DynArray& a);
    DynArray operator+(DynArray& a);
};
#endif
