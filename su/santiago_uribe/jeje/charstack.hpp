#ifndef __CHARSTACK_HPP
#define __CHARSTACK_HPP

#include <vector>
#include <stdexcept>
using namespace std;
class CharStack {
  private:
    vector<char> elements;
  public:
    CharStack() {}
    ~CharStack(){}

    int size();
    void clear();
    bool empty();
    char top();
    void push(char c);
    char pop();
};
#endif
