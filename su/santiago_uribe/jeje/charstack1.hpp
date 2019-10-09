#ifndef __CHARSTACK1_HPP
#define __CHARSTACK1_HPP
const int INITIAL_CAPACITY = 10;

class CharStack {
  private:
    char *elements;
    int capacity;
    int count;

  public:
    CharStack();
    ~CharStack();

    int size();
    void clear();
    bool empty();
    char top();
    void expandCapacity();
    void push(char c);
    char pop();
};
#endif
