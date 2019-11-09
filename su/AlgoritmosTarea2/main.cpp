#include "dlist.hpp"

int main(){
  List<int> mylist;
  int a = 50;
  int b = 80;
  int c = 10;
  int d = 70;
  mylist.push_back(a);
  mylist.push_back(b);
  mylist.push_front(c);
  mylist.push_front(d);

  List<int> mylist2(mylist);

  cout<< mylist.size() << endl;
  cout<< mylist2.size() << endl;
  cout<< endl;

  mylist.pop_back();
  mylist.pop_back();
  mylist.pop_back();



  cout<< mylist.size() << endl;
  cout<< mylist2.size() << endl;
  cout<< endl;

  mylist2.pop_front();
  mylist2.pop_front();
  mylist2.pop_front();

  cout<< mylist.size() << endl;
  cout<< mylist2.size() << endl;
  cout<< endl;

  mylist.push_back(b);
  mylist.push_front(d);

  cout<< mylist.size() << endl;
  cout<< mylist2.size() << endl;
  cout<< endl;

  mylist.clear();

  cout<< mylist.size() << endl;
  cout<< mylist2.size() << endl;
  cout<< endl;

  mylist.push_back(b);
  cout << mylist.back() << '\n';

  return 0;
}
