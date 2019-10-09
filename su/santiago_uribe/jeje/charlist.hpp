#ifndef __CHARLIST_HPP
#define __CHARLIST_HPP

class CharList {
  private:
    struct Cell{
      char ch;
      Cell *next;
    };

    Cell *back;

  public:
    CharList() : back(nullptr) {}
    //~CharList();

    bool empty();
    void push_back(char c);
    void pop_back();
};
#endif
